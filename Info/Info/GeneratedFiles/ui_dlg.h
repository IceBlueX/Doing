/********************************************************************************
** Form generated from reading UI file 'dlg.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_H
#define UI_DLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_si_dlg
{
public:
    QLabel *label;
    QLineEdit *timein;
    QPushButton *ok;
    QPushButton *cancel;

    void setupUi(QDialog *si_dlg)
    {
        if (si_dlg->objectName().isEmpty())
            si_dlg->setObjectName(QStringLiteral("si_dlg"));
        si_dlg->resize(309, 177);
        label = new QLabel(si_dlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 151, 21));
        QFont font;
        font.setFamily(QStringLiteral("Aharoni"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        timein = new QLineEdit(si_dlg);
        timein->setObjectName(QStringLiteral("timein"));
        timein->setGeometry(QRect(70, 60, 171, 31));
        timein->setFont(font);
        ok = new QPushButton(si_dlg);
        ok->setObjectName(QStringLiteral("ok"));
        ok->setGeometry(QRect(210, 120, 71, 41));
        ok->setFont(font);
        cancel = new QPushButton(si_dlg);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(110, 120, 71, 41));
        cancel->setFont(font);

        retranslateUi(si_dlg);

        QMetaObject::connectSlotsByName(si_dlg);
    } // setupUi

    void retranslateUi(QDialog *si_dlg)
    {
        si_dlg->setWindowTitle(QApplication::translate("si_dlg", "Dialog", 0));
        label->setText(QApplication::translate("si_dlg", "\350\257\267\350\276\223\345\205\245\346\227\266\351\227\264\351\227\264\351\232\224(\347\247\222)\357\274\232", 0));
        ok->setText(QApplication::translate("si_dlg", "\347\241\256\345\256\232", 0));
        cancel->setText(QApplication::translate("si_dlg", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class si_dlg: public Ui_si_dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_H
