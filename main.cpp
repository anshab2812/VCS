#include <QApplication>
#include <QPushButton>
#include <QLabel>
 
int main(int argc, char *argv[ ]) 
{
QApplication app(argc, argv);
 
QLabel label("<h2><i>Hello,<i>" "<font size="6">World</font><h2>");
label.show( );
 
return app.exec( );
}
