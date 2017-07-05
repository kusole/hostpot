#include <QtWidgets/QApplication>
#include <QtQuick/QQuickView>
#include <QtCore/QDir>
#include <QtQml/QQmlEngine>
#include <QQmlContext>
#include "softdeal.h"
#include "model_clientopt.h"
#include "clientopt.h"

int main(int argc, char *argv[])
{
    // Qt Charts uses Qt Graphics View Framework for drawing, therefore QApplication must be used.
    QApplication app(argc, argv);

    QQuickView viewer;
    QQmlContext *context = viewer.rootContext();
//    qmlRegisterType<ReadPath>("an.qt.softdeal",1,0,"softdeal");
    SoftDeal sd;
    ClientOpt co(context);
    context->setContextProperty("Clientopt",&co);
    context->setContextProperty("Softdeal",&sd);
    context->setContextProperty("Model_clientopt", QVariant::fromValue(QList<QObject*>()));
    viewer.setTitle(QStringLiteral("QML F1 Legends"));
    viewer.setSource(QUrl("qrc:/main.qml"));
    viewer.setResizeMode(QQuickView::SizeRootObjectToView);
    viewer.show();

    return app.exec();
}
