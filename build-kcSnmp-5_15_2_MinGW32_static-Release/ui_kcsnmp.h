/********************************************************************************
** Form generated from reading UI file 'kcsnmp.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KCSNMP_H
#define UI_KCSNMP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kcSnmp
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *A;
    QGridLayout *A4;
    QComboBox *comboBox_Snmp;
    QPushButton *pushButton_Snmp_Enter;
    QGridLayout *A3;
    QTextEdit *textEdit_Snmp_INFO;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_Snmp;
    QLabel *labe_Snmp_IP;
    QLineEdit *lineEdit_Snmp_IP;
    QPushButton *pushButton_Snmp_PING;
    QPushButton *pushButton_Snmp_CLEAR;
    QFrame *line_Snmp_1;
    QPushButton *pushButton_Snmp_SNMP;
    QCheckBox *checkBox_Snmp;
    QFrame *line_Snmp_2;
    QPushButton *pushButton_Snmp_REBOOT;
    QSpacerItem *horizontalSpacer_Snmp_2;
    QGridLayout *A1;
    QSpacerItem *horizontalSpacer_Snmp_3;
    QLabel *label_Snmp_Machine;
    QSpacerItem *horizontalSpacer_Snmp_4;

    void setupUi(QWidget *kcSnmp)
    {
        if (kcSnmp->objectName().isEmpty())
            kcSnmp->setObjectName(QString::fromUtf8("kcSnmp"));
        kcSnmp->resize(644, 443);
        gridLayout_2 = new QGridLayout(kcSnmp);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        A = new QGridLayout();
        A->setObjectName(QString::fromUtf8("A"));
        A4 = new QGridLayout();
        A4->setObjectName(QString::fromUtf8("A4"));
        comboBox_Snmp = new QComboBox(kcSnmp);
        comboBox_Snmp->setObjectName(QString::fromUtf8("comboBox_Snmp"));
        comboBox_Snmp->setMinimumSize(QSize(0, 28));

        A4->addWidget(comboBox_Snmp, 0, 0, 1, 1);

        pushButton_Snmp_Enter = new QPushButton(kcSnmp);
        pushButton_Snmp_Enter->setObjectName(QString::fromUtf8("pushButton_Snmp_Enter"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        pushButton_Snmp_Enter->setFont(font);
        pushButton_Snmp_Enter->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        A4->addWidget(pushButton_Snmp_Enter, 0, 1, 1, 1);

        A4->setColumnStretch(0, 10);

        A->addLayout(A4, 3, 0, 1, 1);

        A3 = new QGridLayout();
        A3->setObjectName(QString::fromUtf8("A3"));
        textEdit_Snmp_INFO = new QTextEdit(kcSnmp);
        textEdit_Snmp_INFO->setObjectName(QString::fromUtf8("textEdit_Snmp_INFO"));

        A3->addWidget(textEdit_Snmp_INFO, 0, 0, 1, 1);


        A->addLayout(A3, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_Snmp = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_Snmp);

        labe_Snmp_IP = new QLabel(kcSnmp);
        labe_Snmp_IP->setObjectName(QString::fromUtf8("labe_Snmp_IP"));
        labe_Snmp_IP->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        labe_Snmp_IP->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labe_Snmp_IP);

        lineEdit_Snmp_IP = new QLineEdit(kcSnmp);
        lineEdit_Snmp_IP->setObjectName(QString::fromUtf8("lineEdit_Snmp_IP"));
        lineEdit_Snmp_IP->setEnabled(true);
        lineEdit_Snmp_IP->setFont(font);
        lineEdit_Snmp_IP->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lineEdit_Snmp_IP->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lineEdit_Snmp_IP);

        pushButton_Snmp_PING = new QPushButton(kcSnmp);
        pushButton_Snmp_PING->setObjectName(QString::fromUtf8("pushButton_Snmp_PING"));
        pushButton_Snmp_PING->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(pushButton_Snmp_PING);

        pushButton_Snmp_CLEAR = new QPushButton(kcSnmp);
        pushButton_Snmp_CLEAR->setObjectName(QString::fromUtf8("pushButton_Snmp_CLEAR"));
        pushButton_Snmp_CLEAR->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(pushButton_Snmp_CLEAR);

        line_Snmp_1 = new QFrame(kcSnmp);
        line_Snmp_1->setObjectName(QString::fromUtf8("line_Snmp_1"));
        line_Snmp_1->setFrameShape(QFrame::VLine);
        line_Snmp_1->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_Snmp_1);

        pushButton_Snmp_SNMP = new QPushButton(kcSnmp);
        pushButton_Snmp_SNMP->setObjectName(QString::fromUtf8("pushButton_Snmp_SNMP"));
        pushButton_Snmp_SNMP->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(pushButton_Snmp_SNMP);

        checkBox_Snmp = new QCheckBox(kcSnmp);
        checkBox_Snmp->setObjectName(QString::fromUtf8("checkBox_Snmp"));

        horizontalLayout->addWidget(checkBox_Snmp);

        line_Snmp_2 = new QFrame(kcSnmp);
        line_Snmp_2->setObjectName(QString::fromUtf8("line_Snmp_2"));
        line_Snmp_2->setFrameShape(QFrame::VLine);
        line_Snmp_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_Snmp_2);

        pushButton_Snmp_REBOOT = new QPushButton(kcSnmp);
        pushButton_Snmp_REBOOT->setObjectName(QString::fromUtf8("pushButton_Snmp_REBOOT"));
        pushButton_Snmp_REBOOT->setStyleSheet(QString::fromUtf8("font: 75 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(pushButton_Snmp_REBOOT);

        horizontalSpacer_Snmp_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_Snmp_2);


        A->addLayout(horizontalLayout, 1, 0, 1, 1);

        A1 = new QGridLayout();
        A1->setObjectName(QString::fromUtf8("A1"));
        horizontalSpacer_Snmp_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        A1->addItem(horizontalSpacer_Snmp_3, 0, 1, 1, 1);

        label_Snmp_Machine = new QLabel(kcSnmp);
        label_Snmp_Machine->setObjectName(QString::fromUtf8("label_Snmp_Machine"));
        label_Snmp_Machine->setMinimumSize(QSize(100, 100));
        label_Snmp_Machine->setMaximumSize(QSize(100, 100));
        label_Snmp_Machine->setStyleSheet(QString::fromUtf8(""));

        A1->addWidget(label_Snmp_Machine, 0, 2, 1, 1);

        horizontalSpacer_Snmp_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        A1->addItem(horizontalSpacer_Snmp_4, 0, 3, 1, 1);


        A->addLayout(A1, 0, 0, 1, 1);


        gridLayout_2->addLayout(A, 0, 0, 1, 1);


        retranslateUi(kcSnmp);

        QMetaObject::connectSlotsByName(kcSnmp);
    } // setupUi

    void retranslateUi(QWidget *kcSnmp)
    {
        kcSnmp->setWindowTitle(QCoreApplication::translate("kcSnmp", "kcSnmp", nullptr));
        pushButton_Snmp_Enter->setText(QCoreApplication::translate("kcSnmp", "\346\211\247\350\241\214\345\221\275\344\273\244", nullptr));
        labe_Snmp_IP->setText(QCoreApplication::translate("kcSnmp", "\350\256\276\345\244\207IP\357\274\232", nullptr));
        lineEdit_Snmp_IP->setText(QCoreApplication::translate("kcSnmp", "172.16.3.235", nullptr));
        pushButton_Snmp_PING->setText(QCoreApplication::translate("kcSnmp", "\347\275\221\347\273\234\346\265\213\350\257\225", nullptr));
        pushButton_Snmp_CLEAR->setText(QCoreApplication::translate("kcSnmp", "\346\270\205\351\231\244\344\277\241\346\201\257", nullptr));
        pushButton_Snmp_SNMP->setText(QCoreApplication::translate("kcSnmp", "SNMP\346\265\213\350\257\225", nullptr));
        checkBox_Snmp->setText(QCoreApplication::translate("kcSnmp", "Debug", nullptr));
        pushButton_Snmp_REBOOT->setText(QCoreApplication::translate("kcSnmp", "\351\207\215\345\220\257\350\256\276\345\244\207", nullptr));
        label_Snmp_Machine->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class kcSnmp: public Ui_kcSnmp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KCSNMP_H
