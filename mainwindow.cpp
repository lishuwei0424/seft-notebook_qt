#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPushButton>
#include <QFileDialog>
#include <QTextStream>
#include <qDebug>
#include <QTextCodec>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //然后在构造函数中添加如下代码来进行一些初始化操作：
    // 初始化文件为未保存状态
    isUntitled = true;
    // 初始化文件名为"未命名.txt"
    curFile = tr("notebook");
    // 初始化窗口标题为文件名
    setWindowTitle(curFile);
 //   ui->gridLayout->setGeometry(QRect(20,this->height()-100,this->width()-20,80));


    //显示gif图片
    showGif = new QMovie("C:\\Users\\lishuwei\\Desktop\\login2018.12.20\\login2018.12.20\\movie.gif");
    ui->labelGif->setMovie(showGif);
    showGif->start();

}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::maybeSave()
{
    // 如果文档被更改了
    if (ui->textEdit->document()->isModified()) {
    // 自定义一个警告对话框
       QMessageBox box;
       box.setWindowTitle(tr("警告"));
       box.setIcon(QMessageBox::Warning);
       box.setText(curFile + tr(" 尚未保存，是否保存？"));
       QPushButton *yesBtn = box.addButton(tr("是(&Y)"),
                        QMessageBox::YesRole);
       box.addButton(tr("否(&N)"), QMessageBox::NoRole);
       QPushButton *cancelBut = box.addButton(tr("取消"),
                        QMessageBox::RejectRole);
       box.exec();
       if (box.clickedButton() == yesBtn)
            return save();
       else if (box.clickedButton() == cancelBut)
            return false;
   }
   // 如果文档没有被更改，则直接返回true
   return true;
}

void MainWindow::newFile()
{
   if (maybeSave()) {
       isUntitled = true;
       curFile = tr("lishuwei");
       setWindowTitle(curFile);
       ui->textEdit->clear();
       ui->textEdit->setVisible(true);
   }
}


bool MainWindow::save()
{
   if (isUntitled) {
       return saveAs();
   } else {
       return saveFile(curFile);
   }
}

bool MainWindow::saveAs()
{
   QString fileName = QFileDialog::getSaveFileName(this,
                                         tr("另存为"),curFile);
   if (fileName.isEmpty()) return false;
   return saveFile(fileName);
}

bool MainWindow::saveFile(const QString &fileName)
{
   QFile file(fileName);

   if (!file.open(QFile::WriteOnly | QFile::Text)) {

       // %1和%2分别对应后面arg两个参数，/n起换行的作用
       QMessageBox::warning(this, tr("多文档编辑器"),
                   tr("无法写入文件 %1：/n %2")
                  .arg(fileName).arg(file.errorString()));
       return false;
   }
   QTextStream out(&file);
   // 鼠标指针变为等待状态
   QApplication::setOverrideCursor(Qt::WaitCursor);
   out << ui->textEdit->toPlainText();
   // 鼠标指针恢复原来的状态
   QApplication::restoreOverrideCursor();
   isUntitled = false;
   // 获得文件的标准路径
   curFile = QFileInfo(fileName).canonicalFilePath();
   setWindowTitle(curFile);
   return true;
}


void MainWindow::on_actionZin_triggered()
{
    newFile();
}

void MainWindow::on_actionSave_S_triggered()
{
     save();
}

void MainWindow::on_actionSave_as_L_triggered()
{
     saveAs();
}


bool MainWindow::loadFile(const QString &fileName)
{
   QFile file(fileName); // 新建QFile对象
   if (!file.open(QFile::ReadOnly | QFile::Text)) {
       QMessageBox::warning(this, tr("多文档编辑器"),
                             tr("无法读取文件 %1:\n%2.")
                             .arg(fileName).arg(file.errorString()));
       return false; // 只读方式打开文件，出错则提示，并返回false
   }
   QTextStream in(&file); // 新建文本流对象
   QApplication::setOverrideCursor(Qt::WaitCursor);
   // 读取文件的全部文本内容，并添加到编辑器中
   ui->textEdit->setPlainText(in.readAll());      QApplication::restoreOverrideCursor();

   // 设置当前文件
   curFile = QFileInfo(fileName).canonicalFilePath();
   setWindowTitle(curFile);
   return true;
}

void MainWindow::on_actionOpen_triggered()
{
    if (maybeSave()) {

          QString fileName = QFileDialog::getOpenFileName(this);

          // 如果文件名不为空，则加载文件
          if (!fileName.isEmpty()) {
               loadFile(fileName);
               ui->textEdit->setVisible(true);
          }
    }
}

void MainWindow::on_actionClose_C_triggered()
{
    if (maybeSave()) {
           ui->textEdit->setVisible(false);
       }

}

void MainWindow::on_actionExit_X_triggered()
{
    // 先执行关闭操作，再退出程序
      // qApp是指向应用程序的全局指针
      on_actionClose_C_triggered();
      qApp->quit();

}

void MainWindow::on_actionUndo_triggered()
{
     ui->textEdit->undo();
}

void MainWindow::on_action_C_triggered()
{
     ui->textEdit->cut();
}

void MainWindow::on_action_V_triggered()
{
     ui->textEdit->paste();
}
void MainWindow::on_actionZin_hovered(){}

//void MainWindow::on_pushButton_clicked()
//{
//      spFileNames=QFileDialog::getOpenFileNames(this,"样本文件选择","F:\\qt_code\\txt","TXT FILE(*.txt);;SHP FILE(*.shp);;All files(*.*)");


//        if (spFileNames.length()==0)
//        {
//            QMessageBox::information(NULL,"样本文件选择 ","未添加样本文件.");
//        }


//        nspfcount=spFileNames.count();
//        spfcount=ui->SPList->count();
//        if(spfcount>0)//为防止重复加入，列表不为空时，用新加入的文件遍历列表中的文件 如果有相同的 则提示并返回
//        {
//            for(int i=0;i<spfcount; i++)
//            {
//                for(int j=0;j<nspfcount;j++)
//                {
//                    if(spFileNames.value(j)==ui->SPList->item(i)->text())// 注意 这里用==
//                    {
//                        QMessageBox::information(NULL,"样本文件选择",tr("%1     此样本文件已添加").arg(spFileNames.value(j)));
//                        return;
//                    }
//                }
//            }


//            ui->SPList->insertItems(0,spFileNames);

//        }
//        else
//        {
//            ui->SPList->insertItems(0,spFileNames);//将样本文件名在listWidget中显示
//        }
//}

//void MainWindow::on_pushButton_2_clicked()
//{
//        QList <QListWidgetItem*> items ;//注意 items是个Qlist 其中的元素是QListWidgetItem
//        items=ui->SPList->selectedItems();
//        if(items.size()==0)
//            return;
//        else
//        {
//            for(int i =0; i<items.size(); i++)//遍历所算的ITEM
//            {
//                QListWidgetItem*sel = items[i];
//                int r = ui->SPList->row(sel);
//                delete  ui->SPList->takeItem(r);

//            }
//            //下面代码可实现删除单选的item
//            //    QListWidgetItem *item = ui->SPList->takeItem(ui->SPList->currentRow());
//            //    delete item;
//        }
//}

//void MainWindow::on_pushButton_3_clicked()
//{
//    int n=ui->SPList->count();//获取item的总数
//       //删去所有item
//       for(int i=0;i<n;i++)
//       {
//           /*
//            使用takeItem(row)函数将QListWidget中的第row个item移除，
//            移除需要使用delete手动释放其在堆上占用的空间
//           */
//           QListWidgetItem *item = ui->SPList->takeItem(0); //这里是0，不是i，因为每移除一个item都会导致每个item的row发生变化
//           delete item;
//       }
//}

//void MainWindow::on_SPList_doubleClicked(const QModelIndex &index)
//{

//}

//void MainWindow::on_SPList_itemDoubleClicked(QListWidgetItem *item)
//{
//    item->setFlags(item->flags() | Qt::ItemIsEditable);
//}

//void MainWindow::on_SPList_itemClicked(QListWidgetItem *item)
//{
//    QString displayString;
//    QFile file(item->text());
//    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
//    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
//    {
//        qDebug()<<"Can't open the file!"<<endl;
//    }
//    while(!file.atEnd())
//    {
//        QByteArray line = file.readLine();
//        QString str(line);
//        qDebug()<< str;
//        displayString.append(str);
//    }

//       ui->textEdit->clear();
//       ui->textEdit->setPlainText( displayString);

//}

void MainWindow::on_pushButton_open_clicked()
{
        QString fileName = QFileDialog::getOpenFileName(this,tr("选择日志文件"),"",tr("NC(*.NC)")); //选择路径
        ui->lineEdit_2->setText(fileName);
        QString displayString;
        QFile file(fileName);
        QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
        if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            qDebug()<<"Can't open the file!"<<endl;
        }
        while(!file.atEnd())
        {
            QByteArray line = file.readLine();
            QString str(line);
           // qDebug()<< str;
            displayString.append(str);
        }

           ui->textEdit->clear();
           ui->textEdit->setPlainText( displayString);
}

void MainWindow::on_pushButton_tansform_clicked()
{
    QString text = ui->textEdit->toPlainText();

      QStringList number_list = text.split("\n");

//      for (int i = 0; i < number_list.size(); ++i)
//      {
//          qDebug() << number_list.at(i).toDouble();
//      }

      int i=ui->lineEdit->text().toInt()-1;

     if(i<=number_list.size())
     {
         QString strline=number_list.at(i);
         ui->textEdit_1->clear();
         ui->textEdit_1->setPlainText( strline);
     }
     else{
         QMessageBox::warning(this, tr("Waring"),
                               tr("user name or password error!"),
                               QMessageBox::Yes);

         // 清空内容并定位光标
          ui->lineEdit->clear();
          ui->lineEdit->setFocus();
     }


     QString fileName1 = QFileDialog::getSaveFileName(this,
                                           tr("另存为"),curFile);

     if (fileName1.isEmpty()) {;}
     else{
           QFile file(fileName1);

         if (!file.open(QFile::WriteOnly | QFile::Text)) {

             // %1和%2分别对应后面arg两个参数，/n起换行的作用
             QMessageBox::warning(this, tr("多文档编辑器"),
                         tr("无法写入文件 %1：/n %2")
                        .arg(fileName1).arg(file.errorString()));
         }else{
         QTextStream out(&file);
         // 鼠标指针变为等待状态
         QApplication::setOverrideCursor(Qt::WaitCursor);
         out << ui->textEdit->toPlainText();
         // 鼠标指针恢复原来的状态
         QApplication::restoreOverrideCursor();
         isUntitled = false;
         // 获得文件的标准路径
         curFile = QFileInfo(fileName1).canonicalFilePath();
         ui->lineEdit_3->setText(curFile);
         }
     }
}
