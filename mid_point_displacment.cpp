#include "mid_point_displacment.h"
#include <QDebug>

Mid_point_displacment::Mid_point_displacment(QQuickItem *parent): QQuickPaintedItem(parent),
    m_rng(std::random_device{}())
{

}

void Mid_point_displacment::setRoughness(double v)
{
    if (m_roughness == v) return;

    m_roughness = v;
    emit roughnessChanged();

    m_chunkCache.clear();
     m_boundaryY.clear();
    updateChunks();
}

void Mid_point_displacment::setOffset(double v)
{
    if(m_offset == v) return;

    m_offset = v;
    emit offsetChanged();

    m_chunkCache.clear();
     m_boundaryY.clear();
    updateChunks();
}

void Mid_point_displacment::setIterations(int n)
{
    if(m_iterations == n) return;

    m_iterations = n;
    emit iterationsChanged();

    m_chunkCache.clear();
    m_boundaryY.clear();
    updateChunks();
}

void Mid_point_displacment::setCameraX(double v)
{
    if (qFuzzyCompare(m_cameraX, v))return;

    m_cameraX = v;
    emit cameraXChanged();

    updateChunks();
    update();
}

void Mid_point_displacment::setShowChunkBorders(bool flag)
{
    if (m_showChunkBorders == flag) return;

    m_showChunkBorders = flag;
    emit showChunkBordersChanged();
    update();
}

long long Mid_point_displacment::chunkIndex(double x)
{
    return std::floor(x / m_chunkWidth);//что это?
}


void Mid_point_displacment::paint(QPainter *painter)
{
    painter->setRenderHint(QPainter::Antialiasing);
    painter->fillRect(boundingRect(), QColor(26, 26, 46));
    painter->setPen(QPen(QColor(255, 255, 0), 2));


    for (const Chunk &c : m_chunks)
    {
        for (int i = 0; i < c.points.size() - 1; i++)
        {
            QPointF a = c.points[i];
            QPointF b = c.points[i + 1];

            painter->drawLine(
                c.xStart + a.x() - m_cameraX, a.y(),
                c.xStart + b.x() - m_cameraX, b.y()
                );
        }
    }
    if (m_showChunkBorders)
    {
        for (const Chunk &c : m_chunks)
        {
            painter->setPen(QPen(Qt::red, 1));
            double x = c.xStart - m_cameraX;
            painter->drawLine(QPointF(x, 0), QPointF(x, height()));
        }
    }
}



double Mid_point_displacment::random_range(double min, double max)
{
    std::uniform_real_distribution<double> dist(min, max);
    return dist(m_rng);
}

void Mid_point_displacment::componentComplete()
{
    QQuickPaintedItem::componentComplete();

    updateChunks();
}

void Mid_point_displacment::classBegin()
{
    QQuickPaintedItem::classBegin();
}

Chunk Mid_point_displacment::generateChunk(double startX, double startY, double endY)
{
    Chunk c;
    c.xStart = startX;

    double h = height();
    QVector<QPointF> pts;
    pts.append(QPointF(0,startY));// левая граница. Y от предыдущего чанка
    pts.append(QPointF(m_chunkWidth, endY)); // правая граница. Y для следующего чанка

    double offset = m_offset;
    for (int i = 0; i < m_iterations; i++)
    {
        QVector<QPointF> newPts;
        for (int j = 0; j < pts.size() - 1; j++)
        {
            QPointF p1 = pts[j];
            QPointF p2 = pts[j + 1];
            double mx = (p1.x() + p2.x()) * 0.5;
            double my = (p1.y() + p2.y()) * 0.5 + random_range(-offset, offset);


            my = std::clamp(my, h * 0.05, h * 0.95);
            newPts.append(p1);
            newPts.append(QPointF(mx, my));
        }
        newPts.append(pts.last());
        pts = newPts;
        offset *= m_roughness;
    }
    c.points = pts;
    return c;
}

Chunk Mid_point_displacment::getChank(long long id)
{
    if (m_chunkCache.contains(id))
        return m_chunkCache[id];

    double h = height();
    if (h <= 0) return Chunk{};

    double startY, endY;

    if (id == 0)
    {
        startY = h * 0.5;
        endY = random_range(h * 0.2, h * 0.8);
    }
    else if (id > 0)
    {
        startY = getChank(id - 1).endY;
        endY = random_range(h * 0.2, h * 0.8);
    }
    else
    {
        endY = getChank(id + 1).points.first().y();
        startY = random_range(h * 0.2, h * 0.8);
    }

    Chunk c = generateChunk(id * m_chunkWidth, startY, endY);
    c.endY = endY;
    m_chunkCache.insert(id, c);
    return c;
}
void Mid_point_displacment::updateChunks()
{
    double left = m_cameraX - width();
    double right = m_cameraX + width();

    long long first = chunkIndex(left);
    long long last  = chunkIndex(right);

    qDebug() << "first =" << first << "last =" << last;

    m_chunks.clear();

    for (long long i = first; i <= last; i++)
    {
        Chunk c = getChank(i);

        qDebug() << "chunk"<< i << "xStart =" << c.xStart;

        m_chunks.push_back(c);
    }

    update();
}
