/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<mid_point_displacment.h>)
#  include <mid_point_displacment.h>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_MidPointD()
{
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    qmlRegisterTypesAndRevisions<Mid_point_displacment>("MidPointD", 1);
    qmlRegisterAnonymousType<QQuickItem, 254>("MidPointD", 1);
    QT_WARNING_POP
    qmlRegisterModule("MidPointD", 1, 0);
}

static const QQmlModuleRegistration midPointDRegistration("MidPointD", qml_register_types_MidPointD);
