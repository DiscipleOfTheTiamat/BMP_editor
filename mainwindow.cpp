#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QFileDialog>
#include <QImageReader>
#include <iostream>
#include <QBuffer>
#include <string>
using namespace std;


int globalPictureSize = 0;
int MaxPictureScale = 10;
int CurrentScale = 1;
QString filePath;
QImage LastImageSaved;
QImage ImageSaved;

QByteArray bytes;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:\\My Visual Studio Projects\\CPPQT_task\\BMP_Editor_VSQT\\BMP_Editor_VSQT\\dragon.bmp");
    ui->labelPicture->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Choose"),"",tr("Images(*.png *.jpg *.bmp)"));

    if(QString::compare(filename, QString())!=0)
    {
        QImage image;
        LastImageSaved.load(filename);
        bool valid = image.load(filename);

        if(valid)
        {

            /*
            if(ui->labelPicture->width() > ui->labelPicture->height())
                image = image.scaledToWidth(ui->labelPicture->width(),Qt::SmoothTransformation);
            else
                image = image.scaledToHeight(ui->labelPicture->height(),Qt::SmoothTransformation);
            */



            //ui->labelPicture->setPixmap(QPixmap::fromImage(image));
            QImageReader reader(filename);
            QSize sizeOfImage = reader.size();
            int height = sizeOfImage.height();
            int width = sizeOfImage.width();
            globalPictureSize = width;

            QPixmap p(QPixmap::fromImage(image));
                QBuffer buffer(&bytes);
                buffer.open(QIODevice::WriteOnly);
                p.save(&buffer, "BMP"); // writes pixmap into bytes in PNG format
                buffer.close();
            ui->labelPicture->setPixmap(p);

            ui->labelPicture->setFixedWidth(width);
            ui->labelPicture->setFixedHeight(height);
            ui->labelPicture->resize(width,height);
            ui->labelPicture->setBaseSize(width,height);
            /*
            if(ui->labelPicture->width() > ui->labelPicture->height())
                image = image.scaledToWidth(ui->labelPicture->width(),Qt::SmoothTransformation);
            else
                image = image.scaledToHeight(ui->labelPicture->height(),Qt::SmoothTransformation);
            */

        }
        else
        {
            //error handling
        }
    }
}




void MainWindow::on_ButtonResize1_clicked()
{

    //ScalingLabel
    int scale = CurrentScale+1;//1+1
    QString s = "x" + QString::number(CurrentScale);
    ui->ScalingLabel->setText(s);
    QPixmap p = ui->labelPicture->pixmap();
    int widthBase = p.width();
    int heightBase = p.height();



    auto newPixmap = p.scaled(widthBase*scale, heightBase*scale);
    ui->labelPicture->setPixmap(newPixmap);

    ui->labelPicture->setFixedWidth(widthBase*scale);
    ui->labelPicture->setFixedHeight(heightBase*scale);
    ui->labelPicture->resize(widthBase*scale,heightBase*scale);
    ui->labelPicture->setBaseSize(widthBase*scale,heightBase*scale);

    CurrentScale++;
}


void MainWindow::on_ButtonResize2_clicked()
{

    QPixmap p = ui->labelPicture->pixmap();
    int widthBase = p.width();
    int heightBase = p.height();

    if(CurrentScale >1)
    {
        CurrentScale--;

        auto newPixmap = p.scaled(widthBase/2, heightBase/2);
        ui->labelPicture->setPixmap(newPixmap);

        ui->labelPicture->setFixedWidth(widthBase/2);
        ui->labelPicture->setFixedHeight(heightBase/2);
        ui->labelPicture->resize(widthBase/2,heightBase/2);
        ui->labelPicture->setBaseSize(widthBase/2,heightBase/2);
    }
    qDebug("CSafter: %i",CurrentScale);
}


void MainWindow::on_saveButton_clicked()
{
    ImageSaved = LastImageSaved;
}


void MainWindow::on_loadButton_clicked()
{
    QPixmap p(QPixmap::fromImage(LastImageSaved));
    ui->labelPicture->setPixmap(p);
}

