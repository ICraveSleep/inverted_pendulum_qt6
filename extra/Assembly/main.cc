#include <QCoreApplication>
#include <QDebug>
#include <QUrl>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtGui>
#include <QtQuick3D/qquick3d.h>
#include "iostream"


int main(int argc, char *argv[])
{

  QGuiApplication app(argc, argv);

  QSurfaceFormat::setDefaultFormat(QQuick3D::idealSurfaceFormat(4));
  std::cout << "HGelloe" << std::endl;
  QQmlApplicationEngine engine;
  engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
  if (engine.rootObjects().isEmpty()){
    std::cout << "rootObjects were empty" << std::endl;
    return -1;
  }

  return QGuiApplication::exec();
}

