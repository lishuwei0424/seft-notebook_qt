#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    QPixmap pixmap = QPixmap("C:\\Users\\lishuwei\\Desktop\\login2018.12.20\\login2018.12.20\\Qt1.jpg").scaled(this->size());
    QPalette  palette (this->palette());
    palette .setBrush(QPalette::Background, QBrush(pixmap));
    this-> setPalette( palette );
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_loginBtn_clicked()
{
    // 判断用户名和密码是否正确，
    // 如果错误则弹出警告对话框
    if(ui->usrLineEdit->text().trimmed() == tr("")
                && ui->pwdLineEdit->text() == tr(""))
        {
           accept();
        } else {
           QMessageBox::warning(this, tr("Waring"),
                                 tr("user name or password error!"),
                                 QMessageBox::Yes);

           // 清空内容并定位光标
                ui->usrLineEdit->clear();
                ui->pwdLineEdit->clear();
                ui->usrLineEdit->setFocus();

        }
}
