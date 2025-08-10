#include "mainwindow.h"
//#include "bmp.h"
#include "bmp.cpp"
#include <cstdint>
#include <QApplication>
#include <QBuffer>


int main(int argc, char *argv[])
{

    BMP bmp11("C:\\My Visual Studio Projects\\CPPQT_task\\BMP_Editor2\\dragon.bmp");
    //bmp11.fill_region(0, 0, 100, 100, 255, 0, 255, 255);
    //bmp11.fill_pixel(5, 5, 255, 0, 0, 0);

    for (int i(0); i < 494; i+=2)
    {
        if(false) bmp11.fill_pixel(i, 0, 255, 0, 0, 0);
        for (int j(0); j < 529; j++) {
            if (j % 2 != 0) { bmp11.fill_pixel(j, i, 0, 0, 0, 0); }
            else{ bmp11.fill_pixel(j, i+1, 0, 0, 0, 0); }
        }
    }

    bmp11.write("C:\\My Visual Studio Projects\\CPPQT_task\\BMP_Editor2\\BMP\\dragonBlack.bmp");
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
