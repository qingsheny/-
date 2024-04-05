#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QRandomGenerator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    names << "张三" << "李四" << "王五" << "赵六" << "钱七" << "孙八" << "周九" << "吴十"
          << "郑十一" << "王十二" << "冯十三" << "陈十四" << "楮十五" << "卫十六" << "蒋十七" << "沈十八"
          << "韩十九" << "杨二十" << "朱二十一" << "秦二十二" << "尤二十三" << "许二十四" << "何二十五" << "吕二十六"
          << "施二十七" << "张二十八" << "孔二十九" << "曹三十" << "严三十一" << "华三十二" << "金三十三" << "魏三十四"
          << "陶三十五" << "姜三十六" << "戚三十七" << "谢三十八" << "邹三十九" << "喻四十" << "柏四十一" << "水四十二"
          << "窦四十三" << "章四十四" << "云四十五" << "苏四十六" << "潘四十七" << "葛四十八" << "奚四十九" << "范五十";

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int b = ui->lineEdit->text().toInt();
    QSet<int> selectedIndexes;

    QString c;
     if(b>8){
           ui->label_3->setText("人数不能大于8");
           b=20;
          }else{
         while (selectedIndexes.size() < b && selectedIndexes.size() < names.size()) {
             int index = QRandomGenerator::global()->bounded(names.size());
             if (!selectedIndexes.contains(index)) {
                 selectedIndexes.insert(index);
                 c += names[index] + " ";
             }



}

    }

    ui->label_3->setText(c);
}
