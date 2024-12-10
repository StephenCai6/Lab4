/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *titlelabel;
    QStackedWidget *widget;
    QWidget *chatPage;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QTextEdit *roomtextEdit;
    QListWidget *userlistWidget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *saylineEdit;
    QPushButton *sendbutton;
    QPushButton *logoutbutton;
    QWidget *loginPage;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QFrame *loginframe;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *serverEdit;
    QLabel *label_3;
    QLineEdit *nameEdit;
    QSpacerItem *verticalSpacer;
    QPushButton *loginbutton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(446, 285);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("#titlelabel{\n"
"	/* background-color:#f5c7cd; */\n"
"    background-color: rgb(170, 255, 127);\n"
"	font: 14pt \"Arial Unicode MS\";\n"
"	border-radius:5px;\n"
"}\n"
"#loginframe{\n"
"	border-radius:5px;\n"
"	border:2px #FF8687 solid;\n"
"	border-color:#FF8687;\n"
"	background-color:rgb(224, 255, 217);\n"
"	/* background-color: #fbeeee; */\n"
"}\n"
"#loginbutton{\n"
"	border-radius:5px;\n"
"	\n"
"	font: 12pt \"Arial Narrow\";\n"
"	background-color: rgb(255, 251, 254);\n"
"     color: rgb(159, 235, 111);\n"
"	/* color: rgb(255, 147, 149); */\n"
"}\n"
"#widget{\n"
"	\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        titlelabel = new QLabel(centralwidget);
        titlelabel->setObjectName("titlelabel");
        titlelabel->setMinimumSize(QSize(0, 35));
        titlelabel->setStyleSheet(QString::fromUtf8(""));
        titlelabel->setInputMethodHints(Qt::InputMethodHint::ImhNone);
        titlelabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(titlelabel);

        widget = new QStackedWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        chatPage = new QWidget();
        chatPage->setObjectName("chatPage");
        verticalLayout_3 = new QVBoxLayout(chatPage);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        roomtextEdit = new QTextEdit(chatPage);
        roomtextEdit->setObjectName("roomtextEdit");
        roomtextEdit->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(roomtextEdit);

        userlistWidget = new QListWidget(chatPage);
        userlistWidget->setObjectName("userlistWidget");
        userlistWidget->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(userlistWidget);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        saylineEdit = new QLineEdit(chatPage);
        saylineEdit->setObjectName("saylineEdit");

        horizontalLayout_2->addWidget(saylineEdit);

        sendbutton = new QPushButton(chatPage);
        sendbutton->setObjectName("sendbutton");
        sendbutton->setStyleSheet(QString::fromUtf8("/* background-color: #f5c7cd; */\n"
"background-color: rgb(170, 255, 127);\n"
"color: #ffffff;"));

        horizontalLayout_2->addWidget(sendbutton);

        logoutbutton = new QPushButton(chatPage);
        logoutbutton->setObjectName("logoutbutton");
        logoutbutton->setStyleSheet(QString::fromUtf8("/* background-color: #f5c7cd; */\n"
"background-color: rgb(170, 255, 127);\n"
"color: #ffffff;"));

        horizontalLayout_2->addWidget(logoutbutton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        widget->addWidget(chatPage);
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        gridLayout = new QGridLayout(loginPage);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_2 = new QSpacerItem(20, 54, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(79, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        loginframe = new QFrame(loginPage);
        loginframe->setObjectName("loginframe");
        sizePolicy.setHeightForWidth(loginframe->sizePolicy().hasHeightForWidth());
        loginframe->setSizePolicy(sizePolicy);
        loginframe->setMinimumSize(QSize(250, 100));
        loginframe->setMaximumSize(QSize(16777215, 16777215));
        loginframe->setStyleSheet(QString::fromUtf8("/*background-color: rgb(248, 240, 136);*/\n"
"border-color:#FF8687;\n"
"border:2px #FF8687 solid;"));
        loginframe->setFrameShape(QFrame::Shape::StyledPanel);
        loginframe->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(loginframe);
        verticalLayout_2->setObjectName("verticalLayout_2");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(loginframe);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        serverEdit = new QLineEdit(loginframe);
        serverEdit->setObjectName("serverEdit");
        sizePolicy.setHeightForWidth(serverEdit->sizePolicy().hasHeightForWidth());
        serverEdit->setSizePolicy(sizePolicy);
        serverEdit->setMinimumSize(QSize(0, 20));

        formLayout->setWidget(0, QFormLayout::FieldRole, serverEdit);

        label_3 = new QLabel(loginframe);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        nameEdit = new QLineEdit(loginframe);
        nameEdit->setObjectName("nameEdit");
        sizePolicy.setHeightForWidth(nameEdit->sizePolicy().hasHeightForWidth());
        nameEdit->setSizePolicy(sizePolicy);
        nameEdit->setMinimumSize(QSize(0, 20));

        formLayout->setWidget(1, QFormLayout::FieldRole, nameEdit);


        verticalLayout_2->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        loginbutton = new QPushButton(loginframe);
        loginbutton->setObjectName("loginbutton");
        sizePolicy.setHeightForWidth(loginbutton->sizePolicy().hasHeightForWidth());
        loginbutton->setSizePolicy(sizePolicy);
        loginbutton->setMinimumSize(QSize(0, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Narrow")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        loginbutton->setFont(font);
        loginbutton->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/resgin.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        loginbutton->setIcon(icon);

        verticalLayout_2->addWidget(loginbutton);


        gridLayout->addWidget(loginframe, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(79, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 54, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        widget->addWidget(loginPage);

        verticalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        widget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\201\212\345\244\251\345\256\244\345\256\242\346\210\267\347\253\257", nullptr));
        titlelabel->setText(QCoreApplication::translate("MainWindow", "\345\217\275\351\207\214\360\237\220\270\345\225\246\347\232\204\350\201\212\345\244\251\345\256\244", nullptr));
        roomtextEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        sendbutton->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        logoutbutton->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200\357\274\232", nullptr));
        serverEdit->setText(QCoreApplication::translate("MainWindow", "10.60.245.36", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\230\265\347\247\260\357\274\232", nullptr));
        nameEdit->setText(QCoreApplication::translate("MainWindow", "cql", nullptr));
        loginbutton->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
