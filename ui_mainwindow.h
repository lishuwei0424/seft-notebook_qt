/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionZin;
    QAction *actionOpen;
    QAction *actionClose_C;
    QAction *actionSave_S;
    QAction *actionSave_as_L;
    QAction *actionExit_X;
    QAction *actionUndo;
    QAction *action_X;
    QAction *action_C;
    QAction *action_V;
    QAction *action_F;
    QAction *action;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QPushButton *pushButton_open;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit_1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_tansform;
    QLineEdit *lineEdit;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label2;
    QLineEdit *lineEdit_3;
    QLabel *labelGif;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_H;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1020, 599);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setAcceptDrops(false);
        actionZin = new QAction(MainWindow);
        actionZin->setObjectName(QStringLiteral("actionZin"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/myImages/image/new.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionZin->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/myImages/image/open_file.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionClose_C = new QAction(MainWindow);
        actionClose_C->setObjectName(QStringLiteral("actionClose_C"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/myImages/image/colse.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose_C->setIcon(icon2);
        actionSave_S = new QAction(MainWindow);
        actionSave_S->setObjectName(QStringLiteral("actionSave_S"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/myImages/image/save.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_S->setIcon(icon3);
        actionSave_as_L = new QAction(MainWindow);
        actionSave_as_L->setObjectName(QStringLiteral("actionSave_as_L"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/myImages/image/save_.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as_L->setIcon(icon4);
        actionExit_X = new QAction(MainWindow);
        actionExit_X->setObjectName(QStringLiteral("actionExit_X"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        action_X = new QAction(MainWindow);
        action_X->setObjectName(QStringLiteral("action_X"));
        action_C = new QAction(MainWindow);
        action_C->setObjectName(QStringLiteral("action_C"));
        action_V = new QAction(MainWindow);
        action_V->setObjectName(QStringLiteral("action_V"));
        action_F = new QAction(MainWindow);
        action_F->setObjectName(QStringLiteral("action_F"));
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        pushButton_open = new QPushButton(layoutWidget);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));

        verticalLayout->addWidget(pushButton_open);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        textEdit_1 = new QTextEdit(layoutWidget1);
        textEdit_1->setObjectName(QStringLiteral("textEdit_1"));

        verticalLayout_2->addWidget(textEdit_1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_tansform = new QPushButton(layoutWidget1);
        pushButton_tansform->setObjectName(QStringLiteral("pushButton_tansform"));

        horizontalLayout->addWidget(pushButton_tansform);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        splitter->addWidget(layoutWidget1);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label2 = new QLabel(widget);
        label2->setObjectName(QStringLiteral("label2"));

        horizontalLayout_2->addWidget(label2);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_2->addWidget(lineEdit_3);


        verticalLayout_3->addLayout(horizontalLayout_2);

        labelGif = new QLabel(widget);
        labelGif->setObjectName(QStringLiteral("labelGif"));

        verticalLayout_3->addWidget(labelGif);

        splitter->addWidget(widget);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1020, 26));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName(QStringLiteral("menu_E"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_F->addAction(actionZin);
        menu_F->addAction(actionOpen);
        menu_F->addAction(actionClose_C);
        menu_F->addAction(actionSave_S);
        menu_F->addAction(actionSave_as_L);
        menu_F->addAction(actionExit_X);
        menu_E->addAction(actionUndo);
        menu_E->addAction(action_X);
        menu_E->addAction(action_C);
        menu_E->addAction(action_V);
        menu_E->addAction(action_F);
        menu_H->addAction(action);
        toolBar->addAction(actionZin);
        toolBar->addSeparator();
        toolBar->addAction(actionOpen);
        toolBar->addSeparator();
        toolBar->addAction(actionClose_C);
        toolBar->addSeparator();
        toolBar->addAction(actionSave_S);
        toolBar->addSeparator();
        toolBar->addAction(actionSave_as_L);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\347\254\224\350\256\260\346\234\254", 0));
        actionZin->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272(N)", 0));
#ifndef QT_NO_TOOLTIP
        actionZin->setToolTip(QApplication::translate("MainWindow", "\346\226\260\345\273\272(N)", 0));
#endif // QT_NO_TOOLTIP
        actionZin->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", 0));
#ifndef QT_NO_STATUSTIP
        actionOpen->setStatusTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0));
#endif // QT_NO_STATUSTIP
        actionClose_C->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255(&C)", 0));
#ifndef QT_NO_STATUSTIP
        actionClose_C->setStatusTip(QApplication::translate("MainWindow", "\345\205\263\351\227\255", 0));
#endif // QT_NO_STATUSTIP
        actionSave_S->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", 0));
#ifndef QT_NO_STATUSTIP
        actionSave_S->setStatusTip(QApplication::translate("MainWindow", "\345\255\230\344\270\272", 0));
#endif // QT_NO_STATUSTIP
        actionSave_as_L->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&K)", 0));
#ifndef QT_NO_STATUSTIP
        actionSave_as_L->setStatusTip(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272", 0));
#endif // QT_NO_STATUSTIP
        actionExit_X->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272(&X)", 0));
        actionUndo->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200(&Z)", 0));
        action_X->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207(&X)", 0));
        action_C->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266(&C)", 0));
        action_V->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264(&V)", 0));
        action_F->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276(&F)", 0));
        action->setText(QApplication::translate("MainWindow", "\347\211\210\346\234\254\350\257\264\346\230\216", 0));
        pushButton_open->setText(QApplication::translate("MainWindow", "open", 0));
        pushButton_tansform->setText(QApplication::translate("MainWindow", "\350\275\254\344\271\211", 0));
        label->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266\350\267\257\345\276\204", 0));
        label2->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266\350\267\257\345\276\204", 0));
        labelGif->setText(QApplication::translate("MainWindow", "GIF", 0));
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266\357\274\210&F\357\274\211", 0));
        menu_E->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221\357\274\210&E\357\274\211", 0));
        menu_H->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251\357\274\210H\357\274\211", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
#ifndef QT_NO_STATUSTIP
        toolBar->setStatusTip(QApplication::translate("MainWindow", "\346\226\260\345\273\272", 0));
#endif // QT_NO_STATUSTIP
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
