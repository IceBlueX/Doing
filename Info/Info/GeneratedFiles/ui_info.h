/********************************************************************************
** Form generated from reading UI file 'info.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Info
{
public:
    QAction *action;
    QWidget *centralWidget;
    QTextBrowser *textBrowser;
    QPushButton *show;
    QPushButton *start;
    QPushButton *stop;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Info)
    {
        if (Info->objectName().isEmpty())
            Info->setObjectName(QStringLiteral("Info"));
        Info->resize(687, 452);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        Info->setFont(font);
        action = new QAction(Info);
        action->setObjectName(QStringLiteral("action"));
        centralWidget = new QWidget(Info);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 531, 321));
        QFont font1;
        font1.setFamily(QStringLiteral("Aharoni"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        textBrowser->setFont(font1);
        show = new QPushButton(centralWidget);
        show->setObjectName(QStringLiteral("show"));
        show->setGeometry(QRect(550, 340, 111, 51));
        show->setFont(font1);
        start = new QPushButton(centralWidget);
        start->setObjectName(QStringLiteral("start"));
        start->setGeometry(QRect(580, 90, 81, 51));
        start->setFont(font1);
        stop = new QPushButton(centralWidget);
        stop->setObjectName(QStringLiteral("stop"));
        stop->setGeometry(QRect(580, 200, 81, 51));
        stop->setFont(font1);
        Info->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Info);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 687, 27));
        QFont font2;
        font2.setPointSize(12);
        menuBar->setFont(font2);
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu->setFont(font);
        Info->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Info);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Info->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Info);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Info->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());

        retranslateUi(Info);

        QMetaObject::connectSlotsByName(Info);
    } // setupUi

    void retranslateUi(QMainWindow *Info)
    {
        Info->setWindowTitle(QApplication::translate("Info", "Info", 0));
        action->setText(QApplication::translate("Info", "\346\227\266\351\227\264\351\227\264\351\232\224\350\256\276\347\275\256", 0));
        textBrowser->setHtml(QApplication::translate("Info", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Aharoni'; font-size:14pt; font-weight:600; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:5px; margin-bottom:5px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:25px; background-color:#ffffff;\"><br /></p></body></html>", 0));
        show->setText(QApplication::translate("Info", "\346\230\276\347\244\272\344\277\241\346\201\257", 0));
        start->setText(QApplication::translate("Info", "\345\220\257\345\212\250", 0));
        stop->setText(QApplication::translate("Info", "\345\201\234\346\255\242", 0));
        menu->setTitle(QApplication::translate("Info", "\351\205\215\347\275\256", 0));
    } // retranslateUi

};

namespace Ui {
    class Info: public Ui_Info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
