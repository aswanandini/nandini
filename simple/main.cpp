#include <QApplication>
#include<QtWidgets>
int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    QWidget window;
    window.setFixedSize(500,300);
    QPushButton *welcomeButton = new QPushButton("Welcome to Qt", &window);
    welcomeButton->setToolTip("Tool Tip to welcome Button");
    welcomeButton->setGeometry(20,10,100,30);
    window.show();
    return app.exec();
}
