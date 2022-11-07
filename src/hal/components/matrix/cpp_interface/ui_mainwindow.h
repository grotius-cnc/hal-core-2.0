/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionView_perspective;
    QAction *actionView_orthographic;
    QAction *action0;
    QAction *action50;
    QAction *action100;
    QAction *action0_2;
    QAction *action25;
    QAction *action50_2;
    QAction *action75;
    QAction *action100_2;
    QAction *actionHide_View;
    QAction *actionShow_View;
    QAction *actionHide_controls;
    QAction *actionShow_controls;
    QWidget *centralwidget;
    QGridLayout *gridLayout_7;
    QFrame *frame_controls;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_5;
    QComboBox *comboBox;
    QStackedWidget *stackedWidget;
    QFrame *frame_message;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_2;
    QLabel *label_message;
    QLabel *label_servo_load;
    QFrame *frame_opencascade;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_opencascade;
    QMenuBar *menuBar;
    QMenu *menuView;
    QMenu *menuTranceparancy;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(447, 387);
        QPalette palette;
        QBrush brush(QColor(112, 112, 112, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(33, 38, 45, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(56, 56, 56, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush2);
        QBrush brush3(QColor(171, 171, 171, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        QBrush brush4(QColor(170, 255, 255, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush4);
        QBrush brush5(QColor(13, 17, 23, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush5);
        QBrush brush6(QColor(56, 56, 56, 128));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        QBrush brush7(QColor(190, 190, 190, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        MainWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/libicons/arrow-down.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionView_perspective = new QAction(MainWindow);
        actionView_perspective->setObjectName(QString::fromUtf8("actionView_perspective"));
        actionView_orthographic = new QAction(MainWindow);
        actionView_orthographic->setObjectName(QString::fromUtf8("actionView_orthographic"));
        action0 = new QAction(MainWindow);
        action0->setObjectName(QString::fromUtf8("action0"));
        action50 = new QAction(MainWindow);
        action50->setObjectName(QString::fromUtf8("action50"));
        action100 = new QAction(MainWindow);
        action100->setObjectName(QString::fromUtf8("action100"));
        action0_2 = new QAction(MainWindow);
        action0_2->setObjectName(QString::fromUtf8("action0_2"));
        action25 = new QAction(MainWindow);
        action25->setObjectName(QString::fromUtf8("action25"));
        action50_2 = new QAction(MainWindow);
        action50_2->setObjectName(QString::fromUtf8("action50_2"));
        action75 = new QAction(MainWindow);
        action75->setObjectName(QString::fromUtf8("action75"));
        action100_2 = new QAction(MainWindow);
        action100_2->setObjectName(QString::fromUtf8("action100_2"));
        actionHide_View = new QAction(MainWindow);
        actionHide_View->setObjectName(QString::fromUtf8("actionHide_View"));
        actionShow_View = new QAction(MainWindow);
        actionShow_View->setObjectName(QString::fromUtf8("actionShow_View"));
        actionHide_controls = new QAction(MainWindow);
        actionHide_controls->setObjectName(QString::fromUtf8("actionHide_controls"));
        actionShow_controls = new QAction(MainWindow);
        actionShow_controls->setObjectName(QString::fromUtf8("actionShow_controls"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_7 = new QGridLayout(centralwidget);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        frame_controls = new QFrame(centralwidget);
        frame_controls->setObjectName(QString::fromUtf8("frame_controls"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_controls->sizePolicy().hasHeightForWidth());
        frame_controls->setSizePolicy(sizePolicy);
        frame_controls->setMinimumSize(QSize(250, 25));
        frame_controls->setMaximumSize(QSize(700, 16777215));
        frame_controls->setFrameShape(QFrame::StyledPanel);
        frame_controls->setFrameShadow(QFrame::Raised);
        gridLayout_8 = new QGridLayout(frame_controls);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        comboBox = new QComboBox(frame_controls);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(comboBox, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(frame_controls);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_5->addWidget(stackedWidget, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_5, 0, 0, 1, 1);


        gridLayout_7->addWidget(frame_controls, 0, 1, 2, 1);

        frame_message = new QFrame(centralwidget);
        frame_message->setObjectName(QString::fromUtf8("frame_message"));
        sizePolicy1.setHeightForWidth(frame_message->sizePolicy().hasHeightForWidth());
        frame_message->setSizePolicy(sizePolicy1);
        frame_message->setFrameShape(QFrame::StyledPanel);
        frame_message->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame_message);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_message = new QLabel(frame_message);
        label_message->setObjectName(QString::fromUtf8("label_message"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_message->sizePolicy().hasHeightForWidth());
        label_message->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(label_message, 0, 0, 1, 1);

        label_servo_load = new QLabel(frame_message);
        label_servo_load->setObjectName(QString::fromUtf8("label_servo_load"));
        sizePolicy1.setHeightForWidth(label_servo_load->sizePolicy().hasHeightForWidth());
        label_servo_load->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_servo_load, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout_7->addWidget(frame_message, 1, 0, 1, 1);

        frame_opencascade = new QFrame(centralwidget);
        frame_opencascade->setObjectName(QString::fromUtf8("frame_opencascade"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame_opencascade->sizePolicy().hasHeightForWidth());
        frame_opencascade->setSizePolicy(sizePolicy3);
        frame_opencascade->setMinimumSize(QSize(25, 25));
        frame_opencascade->setMaximumSize(QSize(16777215, 16777215));
        frame_opencascade->setFrameShape(QFrame::StyledPanel);
        frame_opencascade->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_opencascade);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_opencascade = new QGridLayout();
        gridLayout_opencascade->setSpacing(0);
        gridLayout_opencascade->setObjectName(QString::fromUtf8("gridLayout_opencascade"));

        gridLayout_4->addLayout(gridLayout_opencascade, 0, 0, 1, 1);


        gridLayout_7->addWidget(frame_opencascade, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 447, 20));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuTranceparancy = new QMenu(menuView);
        menuTranceparancy->setObjectName(QString::fromUtf8("menuTranceparancy"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuView->menuAction());
        menuView->addAction(actionView_orthographic);
        menuView->addAction(actionView_perspective);
        menuView->addAction(menuTranceparancy->menuAction());
        menuView->addAction(actionHide_View);
        menuView->addAction(actionShow_View);
        menuView->addAction(actionHide_controls);
        menuView->addAction(actionShow_controls);
        menuTranceparancy->addAction(action0_2);
        menuTranceparancy->addAction(action25);
        menuTranceparancy->addAction(action50_2);
        menuTranceparancy->addAction(action75);
        menuTranceparancy->addAction(action100_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Skynet Cyberdyne Realtime Hal", nullptr));
        actionView_perspective->setText(QCoreApplication::translate("MainWindow", "View perspective", nullptr));
        actionView_orthographic->setText(QCoreApplication::translate("MainWindow", "View orthographic", nullptr));
        action0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        action50->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        action100->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        action0_2->setText(QCoreApplication::translate("MainWindow", "0%", nullptr));
        action25->setText(QCoreApplication::translate("MainWindow", "25%", nullptr));
        action50_2->setText(QCoreApplication::translate("MainWindow", "50%", nullptr));
        action75->setText(QCoreApplication::translate("MainWindow", "75%", nullptr));
        action100_2->setText(QCoreApplication::translate("MainWindow", "100%", nullptr));
        actionHide_View->setText(QCoreApplication::translate("MainWindow", "Hide view", nullptr));
        actionShow_View->setText(QCoreApplication::translate("MainWindow", "Show view", nullptr));
        actionHide_controls->setText(QCoreApplication::translate("MainWindow", "Hide controls", nullptr));
        actionShow_controls->setText(QCoreApplication::translate("MainWindow", "Show controls", nullptr));
        label_message->setText(QCoreApplication::translate("MainWindow", "Welcome to Skynet.", nullptr));
        label_servo_load->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuTranceparancy->setTitle(QCoreApplication::translate("MainWindow", "Tranceparancy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
