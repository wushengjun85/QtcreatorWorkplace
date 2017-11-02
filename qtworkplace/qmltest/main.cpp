#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<QQuickView>

#include<QQuickView>
#include<QColor>
#include<QQmlContext>
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));


//    QApplication::setOverrideCursor(Qt::BlankCursor);//隐藏鼠标 光标
//    QWSServer::setCursorVisible(false);

    app.setOverrideCursor(Qt::BlankCursor);



//    QQuickView viwer;
//    //QQuickView继承自QWindow而不是QWidget
//    viwer.setFlags(Qt::FramelessWindowHint);
//     viwer.setSource(QUrl("qrc:/qml/main.qml"));

    return app.exec();
}
