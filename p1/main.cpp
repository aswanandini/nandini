#include "mainwindow.h"
#include <QApplication>


    class MyReading : public QSensorReading
      {
          Q_OBJECT
          Q_PROPERTY(qreal myprop READ myprop)
          DECLARE_READING(MyReading)
      public:
          qreal myprop() const;
          vod setMyprop(qreal myprop);
      };
    int main(int argc, char *argv[])
    {
        QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}
