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
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_j2_plus;
    QSpinBox *spinBox_stepsize_joint;
    QPushButton *pushButton_tool_y_min;
    QCheckBox *checkBox_ik;
    QCheckBox *checkBox_fk;
    QLineEdit *lineEdit_cart_z;
    QLineEdit *lineEdit_j2;
    QPushButton *pushButton_j3_min;
    QPushButton *pushButton_z_plus;
    QPushButton *pushButton_j0_plus;
    QPushButton *pushButton_euler_z_min;
    QPushButton *pushButton_x_plus;
    QPushButton *pushButton_y_plus;
    QPushButton *pushButton_j0_min;
    QPushButton *pushButton_tool_z_plus;
    QPushButton *pushButton_euler_x_min;
    QLineEdit *lineEdit_cart_y;
    QLineEdit *lineEdit_j0;
    QCheckBox *checkBox_ik_from_init;
    QLabel *label_stepsize_cart;
    QPushButton *pushButton_euler_y_min;
    QLineEdit *lineEdit_j4;
    QLineEdit *lineEdit_j3;
    QLineEdit *lineEdit_euler_x;
    QLineEdit *lineEdit_j5;
    QPushButton *pushButton_z_min;
    QPushButton *pushButton_j5_plus;
    QSpinBox *spinBox_stepsize_euler;
    QPushButton *pushButton_y_min;
    QPushButton *pushButton_j1_min;
    QLineEdit *lineEdit_cart_x;
    QLineEdit *lineEdit_euler_y;
    QPushButton *pushButton_j4_min;
    QPushButton *pushButton_j1_plus;
    QPushButton *pushButton_x_min;
    QLineEdit *lineEdit_j1;
    QLabel *label_stepsize_tooldir;
    QLineEdit *lineEdit_euler_z;
    QSpinBox *spinBox_stepsize_cart;
    QLabel *label_stepsize_joint;
    QSpinBox *spinBox_stepsize_tooldir;
    QPushButton *pushButton_euler_x_plus;
    QPushButton *pushButton_euler_z_plus;
    QPushButton *pushButton_tool_z_min;
    QPushButton *pushButton_j3_plus;
    QPushButton *pushButton_tool_x_plus;
    QLabel *label_stepsize_euler;
    QPushButton *pushButton_j4_plus;
    QCheckBox *checkBox_error;
    QPushButton *pushButton_euler_y_plus;
    QSpinBox *spinBox_ik_iterations;
    QPushButton *pushButton_tool_x_min;
    QPushButton *pushButton_j5_min;
    QPushButton *pushButton_j2_min;
    QPushButton *pushButton_tool_y_plus;
    QLabel *label_iteriations;
    QPushButton *pushButton_reset;
    QCheckBox *checkBox_motion_continious;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_opencascade;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1014, 758);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 57, 59);\n"
"color: rgb(255, 255, 255);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setAutoFillBackground(false);
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 57, 59);\n"
"color: rgb(255, 255, 255);\n"
""));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMaximumSize(QSize(275, 16777215));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_j2_plus = new QPushButton(frame);
        pushButton_j2_plus->setObjectName(QString::fromUtf8("pushButton_j2_plus"));

        gridLayout_3->addWidget(pushButton_j2_plus, 7, 2, 1, 1);

        spinBox_stepsize_joint = new QSpinBox(frame);
        spinBox_stepsize_joint->setObjectName(QString::fromUtf8("spinBox_stepsize_joint"));
        spinBox_stepsize_joint->setMinimum(-1000);
        spinBox_stepsize_joint->setMaximum(1000);
        spinBox_stepsize_joint->setValue(1);

        gridLayout_3->addWidget(spinBox_stepsize_joint, 4, 0, 1, 1);

        pushButton_tool_y_min = new QPushButton(frame);
        pushButton_tool_y_min->setObjectName(QString::fromUtf8("pushButton_tool_y_min"));

        gridLayout_3->addWidget(pushButton_tool_y_min, 17, 1, 1, 1);

        checkBox_ik = new QCheckBox(frame);
        checkBox_ik->setObjectName(QString::fromUtf8("checkBox_ik"));
        checkBox_ik->setCheckable(true);

        gridLayout_3->addWidget(checkBox_ik, 18, 0, 1, 1);

        checkBox_fk = new QCheckBox(frame);
        checkBox_fk->setObjectName(QString::fromUtf8("checkBox_fk"));
        checkBox_fk->setCheckable(true);

        gridLayout_3->addWidget(checkBox_fk, 17, 0, 1, 1);

        lineEdit_cart_z = new QLineEdit(frame);
        lineEdit_cart_z->setObjectName(QString::fromUtf8("lineEdit_cart_z"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_cart_z->sizePolicy().hasHeightForWidth());
        lineEdit_cart_z->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lineEdit_cart_z, 3, 0, 1, 1);

        lineEdit_j2 = new QLineEdit(frame);
        lineEdit_j2->setObjectName(QString::fromUtf8("lineEdit_j2"));
        sizePolicy.setHeightForWidth(lineEdit_j2->sizePolicy().hasHeightForWidth());
        lineEdit_j2->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lineEdit_j2, 7, 0, 1, 1);

        pushButton_j3_min = new QPushButton(frame);
        pushButton_j3_min->setObjectName(QString::fromUtf8("pushButton_j3_min"));

        gridLayout_3->addWidget(pushButton_j3_min, 8, 1, 1, 1);

        pushButton_z_plus = new QPushButton(frame);
        pushButton_z_plus->setObjectName(QString::fromUtf8("pushButton_z_plus"));

        gridLayout_3->addWidget(pushButton_z_plus, 3, 2, 1, 1);

        pushButton_j0_plus = new QPushButton(frame);
        pushButton_j0_plus->setObjectName(QString::fromUtf8("pushButton_j0_plus"));

        gridLayout_3->addWidget(pushButton_j0_plus, 5, 2, 1, 1);

        pushButton_euler_z_min = new QPushButton(frame);
        pushButton_euler_z_min->setObjectName(QString::fromUtf8("pushButton_euler_z_min"));

        gridLayout_3->addWidget(pushButton_euler_z_min, 14, 1, 1, 1);

        pushButton_x_plus = new QPushButton(frame);
        pushButton_x_plus->setObjectName(QString::fromUtf8("pushButton_x_plus"));

        gridLayout_3->addWidget(pushButton_x_plus, 1, 2, 1, 1);

        pushButton_y_plus = new QPushButton(frame);
        pushButton_y_plus->setObjectName(QString::fromUtf8("pushButton_y_plus"));

        gridLayout_3->addWidget(pushButton_y_plus, 2, 2, 1, 1);

        pushButton_j0_min = new QPushButton(frame);
        pushButton_j0_min->setObjectName(QString::fromUtf8("pushButton_j0_min"));

        gridLayout_3->addWidget(pushButton_j0_min, 5, 1, 1, 1);

        pushButton_tool_z_plus = new QPushButton(frame);
        pushButton_tool_z_plus->setObjectName(QString::fromUtf8("pushButton_tool_z_plus"));

        gridLayout_3->addWidget(pushButton_tool_z_plus, 18, 2, 1, 1);

        pushButton_euler_x_min = new QPushButton(frame);
        pushButton_euler_x_min->setObjectName(QString::fromUtf8("pushButton_euler_x_min"));

        gridLayout_3->addWidget(pushButton_euler_x_min, 12, 1, 1, 1);

        lineEdit_cart_y = new QLineEdit(frame);
        lineEdit_cart_y->setObjectName(QString::fromUtf8("lineEdit_cart_y"));
        sizePolicy.setHeightForWidth(lineEdit_cart_y->sizePolicy().hasHeightForWidth());
        lineEdit_cart_y->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lineEdit_cart_y, 2, 0, 1, 1);

        lineEdit_j0 = new QLineEdit(frame);
        lineEdit_j0->setObjectName(QString::fromUtf8("lineEdit_j0"));
        sizePolicy.setHeightForWidth(lineEdit_j0->sizePolicy().hasHeightForWidth());
        lineEdit_j0->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lineEdit_j0, 5, 0, 1, 1);

        checkBox_ik_from_init = new QCheckBox(frame);
        checkBox_ik_from_init->setObjectName(QString::fromUtf8("checkBox_ik_from_init"));

        gridLayout_3->addWidget(checkBox_ik_from_init, 19, 0, 1, 3);

        label_stepsize_cart = new QLabel(frame);
        label_stepsize_cart->setObjectName(QString::fromUtf8("label_stepsize_cart"));

        gridLayout_3->addWidget(label_stepsize_cart, 0, 1, 1, 2);

        pushButton_euler_y_min = new QPushButton(frame);
        pushButton_euler_y_min->setObjectName(QString::fromUtf8("pushButton_euler_y_min"));

        gridLayout_3->addWidget(pushButton_euler_y_min, 13, 1, 1, 1);

        lineEdit_j4 = new QLineEdit(frame);
        lineEdit_j4->setObjectName(QString::fromUtf8("lineEdit_j4"));
        sizePolicy.setHeightForWidth(lineEdit_j4->sizePolicy().hasHeightForWidth());
        lineEdit_j4->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lineEdit_j4, 9, 0, 1, 1);

        lineEdit_j3 = new QLineEdit(frame);
        lineEdit_j3->setObjectName(QString::fromUtf8("lineEdit_j3"));
        sizePolicy.setHeightForWidth(lineEdit_j3->sizePolicy().hasHeightForWidth());
        lineEdit_j3->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lineEdit_j3, 8, 0, 1, 1);

        lineEdit_euler_x = new QLineEdit(frame);
        lineEdit_euler_x->setObjectName(QString::fromUtf8("lineEdit_euler_x"));
        sizePolicy.setHeightForWidth(lineEdit_euler_x->sizePolicy().hasHeightForWidth());
        lineEdit_euler_x->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lineEdit_euler_x, 12, 0, 1, 1);

        lineEdit_j5 = new QLineEdit(frame);
        lineEdit_j5->setObjectName(QString::fromUtf8("lineEdit_j5"));
        sizePolicy.setHeightForWidth(lineEdit_j5->sizePolicy().hasHeightForWidth());
        lineEdit_j5->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lineEdit_j5, 10, 0, 1, 1);

        pushButton_z_min = new QPushButton(frame);
        pushButton_z_min->setObjectName(QString::fromUtf8("pushButton_z_min"));

        gridLayout_3->addWidget(pushButton_z_min, 3, 1, 1, 1);

        pushButton_j5_plus = new QPushButton(frame);
        pushButton_j5_plus->setObjectName(QString::fromUtf8("pushButton_j5_plus"));

        gridLayout_3->addWidget(pushButton_j5_plus, 10, 2, 1, 1);

        spinBox_stepsize_euler = new QSpinBox(frame);
        spinBox_stepsize_euler->setObjectName(QString::fromUtf8("spinBox_stepsize_euler"));
        spinBox_stepsize_euler->setMinimum(-1000);
        spinBox_stepsize_euler->setMaximum(1000);
        spinBox_stepsize_euler->setValue(1);

        gridLayout_3->addWidget(spinBox_stepsize_euler, 11, 0, 1, 1);

        pushButton_y_min = new QPushButton(frame);
        pushButton_y_min->setObjectName(QString::fromUtf8("pushButton_y_min"));

        gridLayout_3->addWidget(pushButton_y_min, 2, 1, 1, 1);

        pushButton_j1_min = new QPushButton(frame);
        pushButton_j1_min->setObjectName(QString::fromUtf8("pushButton_j1_min"));

        gridLayout_3->addWidget(pushButton_j1_min, 6, 1, 1, 1);

        lineEdit_cart_x = new QLineEdit(frame);
        lineEdit_cart_x->setObjectName(QString::fromUtf8("lineEdit_cart_x"));
        sizePolicy.setHeightForWidth(lineEdit_cart_x->sizePolicy().hasHeightForWidth());
        lineEdit_cart_x->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lineEdit_cart_x, 1, 0, 1, 1);

        lineEdit_euler_y = new QLineEdit(frame);
        lineEdit_euler_y->setObjectName(QString::fromUtf8("lineEdit_euler_y"));
        sizePolicy.setHeightForWidth(lineEdit_euler_y->sizePolicy().hasHeightForWidth());
        lineEdit_euler_y->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lineEdit_euler_y, 13, 0, 1, 1);

        pushButton_j4_min = new QPushButton(frame);
        pushButton_j4_min->setObjectName(QString::fromUtf8("pushButton_j4_min"));

        gridLayout_3->addWidget(pushButton_j4_min, 9, 1, 1, 1);

        pushButton_j1_plus = new QPushButton(frame);
        pushButton_j1_plus->setObjectName(QString::fromUtf8("pushButton_j1_plus"));

        gridLayout_3->addWidget(pushButton_j1_plus, 6, 2, 1, 1);

        pushButton_x_min = new QPushButton(frame);
        pushButton_x_min->setObjectName(QString::fromUtf8("pushButton_x_min"));

        gridLayout_3->addWidget(pushButton_x_min, 1, 1, 1, 1);

        lineEdit_j1 = new QLineEdit(frame);
        lineEdit_j1->setObjectName(QString::fromUtf8("lineEdit_j1"));
        sizePolicy.setHeightForWidth(lineEdit_j1->sizePolicy().hasHeightForWidth());
        lineEdit_j1->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lineEdit_j1, 6, 0, 1, 1);

        label_stepsize_tooldir = new QLabel(frame);
        label_stepsize_tooldir->setObjectName(QString::fromUtf8("label_stepsize_tooldir"));

        gridLayout_3->addWidget(label_stepsize_tooldir, 15, 1, 1, 2);

        lineEdit_euler_z = new QLineEdit(frame);
        lineEdit_euler_z->setObjectName(QString::fromUtf8("lineEdit_euler_z"));
        sizePolicy.setHeightForWidth(lineEdit_euler_z->sizePolicy().hasHeightForWidth());
        lineEdit_euler_z->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(lineEdit_euler_z, 14, 0, 1, 1);

        spinBox_stepsize_cart = new QSpinBox(frame);
        spinBox_stepsize_cart->setObjectName(QString::fromUtf8("spinBox_stepsize_cart"));
        spinBox_stepsize_cart->setMinimum(-1000);
        spinBox_stepsize_cart->setMaximum(1000);
        spinBox_stepsize_cart->setValue(5);

        gridLayout_3->addWidget(spinBox_stepsize_cart, 0, 0, 1, 1);

        label_stepsize_joint = new QLabel(frame);
        label_stepsize_joint->setObjectName(QString::fromUtf8("label_stepsize_joint"));

        gridLayout_3->addWidget(label_stepsize_joint, 4, 1, 1, 2);

        spinBox_stepsize_tooldir = new QSpinBox(frame);
        spinBox_stepsize_tooldir->setObjectName(QString::fromUtf8("spinBox_stepsize_tooldir"));
        spinBox_stepsize_tooldir->setMinimum(-1000);
        spinBox_stepsize_tooldir->setMaximum(1000);
        spinBox_stepsize_tooldir->setValue(1);

        gridLayout_3->addWidget(spinBox_stepsize_tooldir, 15, 0, 1, 1);

        pushButton_euler_x_plus = new QPushButton(frame);
        pushButton_euler_x_plus->setObjectName(QString::fromUtf8("pushButton_euler_x_plus"));

        gridLayout_3->addWidget(pushButton_euler_x_plus, 12, 2, 1, 1);

        pushButton_euler_z_plus = new QPushButton(frame);
        pushButton_euler_z_plus->setObjectName(QString::fromUtf8("pushButton_euler_z_plus"));

        gridLayout_3->addWidget(pushButton_euler_z_plus, 14, 2, 1, 1);

        pushButton_tool_z_min = new QPushButton(frame);
        pushButton_tool_z_min->setObjectName(QString::fromUtf8("pushButton_tool_z_min"));

        gridLayout_3->addWidget(pushButton_tool_z_min, 18, 1, 1, 1);

        pushButton_j3_plus = new QPushButton(frame);
        pushButton_j3_plus->setObjectName(QString::fromUtf8("pushButton_j3_plus"));

        gridLayout_3->addWidget(pushButton_j3_plus, 8, 2, 1, 1);

        pushButton_tool_x_plus = new QPushButton(frame);
        pushButton_tool_x_plus->setObjectName(QString::fromUtf8("pushButton_tool_x_plus"));

        gridLayout_3->addWidget(pushButton_tool_x_plus, 16, 2, 1, 1);

        label_stepsize_euler = new QLabel(frame);
        label_stepsize_euler->setObjectName(QString::fromUtf8("label_stepsize_euler"));

        gridLayout_3->addWidget(label_stepsize_euler, 11, 1, 1, 2);

        pushButton_j4_plus = new QPushButton(frame);
        pushButton_j4_plus->setObjectName(QString::fromUtf8("pushButton_j4_plus"));

        gridLayout_3->addWidget(pushButton_j4_plus, 9, 2, 1, 1);

        checkBox_error = new QCheckBox(frame);
        checkBox_error->setObjectName(QString::fromUtf8("checkBox_error"));
        checkBox_error->setCheckable(true);

        gridLayout_3->addWidget(checkBox_error, 16, 0, 1, 1);

        pushButton_euler_y_plus = new QPushButton(frame);
        pushButton_euler_y_plus->setObjectName(QString::fromUtf8("pushButton_euler_y_plus"));

        gridLayout_3->addWidget(pushButton_euler_y_plus, 13, 2, 1, 1);

        spinBox_ik_iterations = new QSpinBox(frame);
        spinBox_ik_iterations->setObjectName(QString::fromUtf8("spinBox_ik_iterations"));
        spinBox_ik_iterations->setValue(50);

        gridLayout_3->addWidget(spinBox_ik_iterations, 20, 0, 1, 1);

        pushButton_tool_x_min = new QPushButton(frame);
        pushButton_tool_x_min->setObjectName(QString::fromUtf8("pushButton_tool_x_min"));

        gridLayout_3->addWidget(pushButton_tool_x_min, 16, 1, 1, 1);

        pushButton_j5_min = new QPushButton(frame);
        pushButton_j5_min->setObjectName(QString::fromUtf8("pushButton_j5_min"));

        gridLayout_3->addWidget(pushButton_j5_min, 10, 1, 1, 1);

        pushButton_j2_min = new QPushButton(frame);
        pushButton_j2_min->setObjectName(QString::fromUtf8("pushButton_j2_min"));

        gridLayout_3->addWidget(pushButton_j2_min, 7, 1, 1, 1);

        pushButton_tool_y_plus = new QPushButton(frame);
        pushButton_tool_y_plus->setObjectName(QString::fromUtf8("pushButton_tool_y_plus"));

        gridLayout_3->addWidget(pushButton_tool_y_plus, 17, 2, 1, 1);

        label_iteriations = new QLabel(frame);
        label_iteriations->setObjectName(QString::fromUtf8("label_iteriations"));

        gridLayout_3->addWidget(label_iteriations, 20, 1, 1, 2);

        pushButton_reset = new QPushButton(frame);
        pushButton_reset->setObjectName(QString::fromUtf8("pushButton_reset"));

        gridLayout_3->addWidget(pushButton_reset, 21, 0, 1, 1);

        checkBox_motion_continious = new QCheckBox(frame);
        checkBox_motion_continious->setObjectName(QString::fromUtf8("checkBox_motion_continious"));
        checkBox_motion_continious->setChecked(true);

        gridLayout_3->addWidget(checkBox_motion_continious, 21, 1, 1, 2);


        gridLayout->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame, 0, 0, 1, 1);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_opencascade = new QGridLayout();
        gridLayout_opencascade->setObjectName(QString::fromUtf8("gridLayout_opencascade"));

        gridLayout_2->addLayout(gridLayout_opencascade, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame_2, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1014, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "hal-core-2.0", nullptr));
        pushButton_j2_plus->setText(QCoreApplication::translate("MainWindow", "j2+", nullptr));
        pushButton_tool_y_min->setText(QCoreApplication::translate("MainWindow", "tool y-", nullptr));
        checkBox_ik->setText(QCoreApplication::translate("MainWindow", "Ik", nullptr));
        checkBox_fk->setText(QCoreApplication::translate("MainWindow", "Fk", nullptr));
        pushButton_j3_min->setText(QCoreApplication::translate("MainWindow", "j3-", nullptr));
        pushButton_z_plus->setText(QCoreApplication::translate("MainWindow", "z+", nullptr));
        pushButton_j0_plus->setText(QCoreApplication::translate("MainWindow", "j0+", nullptr));
        pushButton_euler_z_min->setText(QCoreApplication::translate("MainWindow", "euler z-", nullptr));
        pushButton_x_plus->setText(QCoreApplication::translate("MainWindow", "x+", nullptr));
        pushButton_y_plus->setText(QCoreApplication::translate("MainWindow", "y+", nullptr));
        pushButton_j0_min->setText(QCoreApplication::translate("MainWindow", "j0-", nullptr));
        pushButton_tool_z_plus->setText(QCoreApplication::translate("MainWindow", "tool z+", nullptr));
        pushButton_euler_x_min->setText(QCoreApplication::translate("MainWindow", "euler x-", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_ik_from_init->setToolTip(QCoreApplication::translate("MainWindow", "ik from init position \n"
"or ik from current position.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_ik_from_init->setText(QCoreApplication::translate("MainWindow", "Ik from init", nullptr));
        label_stepsize_cart->setText(QCoreApplication::translate("MainWindow", "stepsize cart [mm]", nullptr));
        pushButton_euler_y_min->setText(QCoreApplication::translate("MainWindow", "euler y-", nullptr));
        pushButton_z_min->setText(QCoreApplication::translate("MainWindow", "z-", nullptr));
        pushButton_j5_plus->setText(QCoreApplication::translate("MainWindow", "j5+", nullptr));
        pushButton_y_min->setText(QCoreApplication::translate("MainWindow", "y-", nullptr));
        pushButton_j1_min->setText(QCoreApplication::translate("MainWindow", "j1-", nullptr));
        pushButton_j4_min->setText(QCoreApplication::translate("MainWindow", "j4-", nullptr));
        pushButton_j1_plus->setText(QCoreApplication::translate("MainWindow", "j1+", nullptr));
        pushButton_x_min->setText(QCoreApplication::translate("MainWindow", "x-", nullptr));
        label_stepsize_tooldir->setText(QCoreApplication::translate("MainWindow", "stepsize tooldir [mm]", nullptr));
        label_stepsize_joint->setText(QCoreApplication::translate("MainWindow", "stepsize joint [deg]", nullptr));
        pushButton_euler_x_plus->setText(QCoreApplication::translate("MainWindow", "euler x+", nullptr));
        pushButton_euler_z_plus->setText(QCoreApplication::translate("MainWindow", "euler z+", nullptr));
        pushButton_tool_z_min->setText(QCoreApplication::translate("MainWindow", "tool z-", nullptr));
        pushButton_j3_plus->setText(QCoreApplication::translate("MainWindow", "j3+", nullptr));
        pushButton_tool_x_plus->setText(QCoreApplication::translate("MainWindow", "tool x+", nullptr));
        label_stepsize_euler->setText(QCoreApplication::translate("MainWindow", "stepsize euler [deg]", nullptr));
        pushButton_j4_plus->setText(QCoreApplication::translate("MainWindow", "j4+", nullptr));
        checkBox_error->setText(QCoreApplication::translate("MainWindow", "Ik error", nullptr));
        pushButton_euler_y_plus->setText(QCoreApplication::translate("MainWindow", "euler y+", nullptr));
        pushButton_tool_x_min->setText(QCoreApplication::translate("MainWindow", "tool x-", nullptr));
        pushButton_j5_min->setText(QCoreApplication::translate("MainWindow", "j5-", nullptr));
        pushButton_j2_min->setText(QCoreApplication::translate("MainWindow", "j2-", nullptr));
        pushButton_tool_y_plus->setText(QCoreApplication::translate("MainWindow", "tool y+", nullptr));
        label_iteriations->setText(QCoreApplication::translate("MainWindow", "ik iterations [n]", nullptr));
        pushButton_reset->setText(QCoreApplication::translate("MainWindow", "reset", nullptr));
        checkBox_motion_continious->setText(QCoreApplication::translate("MainWindow", "Motion continious", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
