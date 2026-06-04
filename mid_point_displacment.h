#ifndef MID_POINT_DISPLACMENT_H
#define MID_POINT_DISPLACMENT_H
#include <QQuickPaintedItem>
#include <QPainter>
#include <QVector>
#include <QPointF>
#include <random>
#include <QHash>

struct Chunk
{
    double xStart;              // где начинается
    QVector<QPointF> points;    // точки внутри чанка
    double endY;
};

class Mid_point_displacment : public QQuickPaintedItem
{
    Q_OBJECT
    QML_ELEMENT
    QML_NAMED_ELEMENT(MidPointD)

    Q_PROPERTY(double roughness READ roughness() WRITE setRoughness NOTIFY roughnessChanged FINAL)
    Q_PROPERTY(double offset READ offset WRITE setOffset NOTIFY offsetChanged FINAL)
    Q_PROPERTY(int iterations READ iterations WRITE setIterations NOTIFY iterationsChanged FINAL)

    Q_PROPERTY(double cameraX READ cameraX WRITE setCameraX NOTIFY cameraXChanged)

    Q_PROPERTY(bool showChunkBorders READ showChunkBorders WRITE setShowChunkBorders NOTIFY showChunkBordersChanged FINAL)


public:
    explicit Mid_point_displacment(QQuickItem *parent = nullptr);

    double roughness() const{return m_roughness;}
    void setRoughness(double v);

    double offset() const{return m_offset;}
    void setOffset(double v);

    int iterations() const{return m_iterations;}
    void setIterations(int n);

    double cameraX() const { return m_cameraX; }
    void setCameraX(double v);

    bool showChunkBorders() const { return m_showChunkBorders; }
    void setShowChunkBorders(bool flag);

    long long chunkIndex(double x);

    void paint(QPainter *painter) override;



signals:
    void roughnessChanged();
    void offsetChanged();
    void iterationsChanged();
    void cameraXChanged();
    void showChunkBordersChanged();

private:
    double random_range(double min, double max);

    void componentComplete() override;

    void classBegin() override;

    Chunk generateChunk(double startX, double startY, double endY, long long chunkId);

    Chunk getChank(long long id);

    double boundaryY(long long boundaryId, double h) const;
    double randLocal(double min, double max, std::mt19937 &rng) const;

    void updateChunks();

private:
    QVector<QPointF> m_points;
    std::mt19937 m_rng;

    double m_roughness = 0.9;   //шероховатость
    double m_offset = 120.0;    //начальное смещение
    int m_iterations = 8;

    double m_cameraX = 0.0;

    QVector<Chunk> m_chunks;

    double m_chunkWidth = 300.0;

    QHash<long long, Chunk> m_chunkCache;
    QHash<long long, double> m_boundaryY;

    bool m_showChunkBorders = false;

};

#endif // MID_POINT_DISPLACMENT_H
