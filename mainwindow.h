#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QLabel>
#include <QString>
#include <QMovie>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void newFile();   // 新建操作
    bool maybeSave(); // 判断是否需要保存
    bool save();      // 保存操作
    bool saveAs();    // 另存为操作
    bool saveFile(const QString &fileName); // 保存文件
    bool loadFile(const QString &fileName); // 加载文件


private slots:
    void on_actionZin_triggered();

    void on_actionSave_S_triggered();

    void on_actionSave_as_L_triggered();

    void on_actionZin_hovered();

    void on_actionOpen_triggered();

    void on_actionClose_C_triggered();

    void on_actionExit_X_triggered();

    void on_actionUndo_triggered();

    void on_action_C_triggered();

    void on_action_V_triggered();

//    void on_pushButton_clicked();

//    void on_pushButton_2_clicked();

//    void on_pushButton_3_clicked();

//    void on_SPList_doubleClicked(const QModelIndex &index);

//    void on_SPList_itemDoubleClicked(QListWidgetItem *item);

//    void on_SPList_itemClicked(QListWidgetItem *item);

    void on_pushButton_open_clicked();

    void on_pushButton_tansform_clicked();

private:
    Ui::MainWindow *ui;
    // 为真表示文件没有保存过，为假表示文件已经被保存过了
    bool isUntitled;
    // 保存当前文件的路径
    QString curFile;
     int nspfcount;
      int spfcount;
    QMovie *showGif;
};

#endif // MAINWINDOW_H
