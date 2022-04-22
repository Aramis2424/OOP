/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_11;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QDoubleSpinBox *CSxField;
    QDoubleSpinBox *CSyField;
    QDoubleSpinBox *CSzField;
    QGridLayout *gridLayout_9;
    QDoubleSpinBox *KzField;
    QDoubleSpinBox *KxField;
    QDoubleSpinBox *KyField;
    QLabel *label_15;
    QLabel *label_14;
    QLabel *label_13;
    QPushButton *ScaleButton;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *DzField;
    QDoubleSpinBox *DyField;
    QDoubleSpinBox *DxField;
    QPushButton *MoveButton;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_2;
    QLabel *label_16;
    QLabel *label_17;
    QDoubleSpinBox *AxField;
    QDoubleSpinBox *AyField;
    QDoubleSpinBox *AzField;
    QLabel *label_18;
    QGridLayout *gridLayout_10;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QDoubleSpinBox *CRxField;
    QDoubleSpinBox *CRyField;
    QDoubleSpinBox *CRzField;
    QPushButton *RotateButton;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *LoadFigureButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1079, 629);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);

        gridLayout->addWidget(graphicsView, 0, 0, 1, 3);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setAlignment(Qt::AlignCenter);
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy1);
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_11->addWidget(label_22, 0, 0, 1, 1);

        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        sizePolicy1.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy1);
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_11->addWidget(label_23, 1, 0, 1, 1);

        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        sizePolicy1.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy1);
        label_24->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_11->addWidget(label_24, 2, 0, 1, 1);

        CSxField = new QDoubleSpinBox(groupBox_2);
        CSxField->setObjectName(QString::fromUtf8("CSxField"));
        CSxField->setMinimum(-10000.000000000000000);
        CSxField->setMaximum(10000.000000000000000);

        gridLayout_11->addWidget(CSxField, 0, 1, 1, 1);

        CSyField = new QDoubleSpinBox(groupBox_2);
        CSyField->setObjectName(QString::fromUtf8("CSyField"));
        CSyField->setMinimum(-10000.000000000000000);
        CSyField->setMaximum(10000.000000000000000);

        gridLayout_11->addWidget(CSyField, 1, 1, 1, 1);

        CSzField = new QDoubleSpinBox(groupBox_2);
        CSzField->setObjectName(QString::fromUtf8("CSzField"));
        CSzField->setMinimum(-10000.000000000000000);
        CSzField->setMaximum(10000.000000000000000);

        gridLayout_11->addWidget(CSzField, 2, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_11, 1, 0, 1, 2);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        KzField = new QDoubleSpinBox(groupBox_2);
        KzField->setObjectName(QString::fromUtf8("KzField"));
        sizePolicy1.setHeightForWidth(KzField->sizePolicy().hasHeightForWidth());
        KzField->setSizePolicy(sizePolicy1);
        KzField->setMinimum(-10000.000000000000000);
        KzField->setMaximum(10000.000000000000000);

        gridLayout_9->addWidget(KzField, 2, 1, 1, 1);

        KxField = new QDoubleSpinBox(groupBox_2);
        KxField->setObjectName(QString::fromUtf8("KxField"));
        sizePolicy1.setHeightForWidth(KxField->sizePolicy().hasHeightForWidth());
        KxField->setSizePolicy(sizePolicy1);
        KxField->setMinimum(-10000.000000000000000);
        KxField->setMaximum(10000.000000000000000);

        gridLayout_9->addWidget(KxField, 0, 1, 1, 1);

        KyField = new QDoubleSpinBox(groupBox_2);
        KyField->setObjectName(QString::fromUtf8("KyField"));
        sizePolicy1.setHeightForWidth(KyField->sizePolicy().hasHeightForWidth());
        KyField->setSizePolicy(sizePolicy1);
        KyField->setMinimum(-10000.000000000000000);
        KyField->setMaximum(10000.000000000000000);

        gridLayout_9->addWidget(KyField, 1, 1, 1, 1);

        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy1.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy1);
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_9->addWidget(label_15, 0, 0, 1, 1);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_9->addWidget(label_14, 1, 0, 1, 1);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_9->addWidget(label_13, 2, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_9, 1, 2, 1, 2);

        ScaleButton = new QPushButton(groupBox_2);
        ScaleButton->setObjectName(QString::fromUtf8("ScaleButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ScaleButton->sizePolicy().hasHeightForWidth());
        ScaleButton->setSizePolicy(sizePolicy2);
        ScaleButton->setFlat(false);

        gridLayout_6->addWidget(ScaleButton, 5, 0, 1, 4);


        gridLayout_5->addLayout(gridLayout_6, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        gridLayout->addWidget(groupBox_2, 3, 1, 1, 1);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        DzField = new QDoubleSpinBox(groupBox);
        DzField->setObjectName(QString::fromUtf8("DzField"));
        sizePolicy1.setHeightForWidth(DzField->sizePolicy().hasHeightForWidth());
        DzField->setSizePolicy(sizePolicy1);
        DzField->setMinimum(-10000.000000000000000);
        DzField->setMaximum(10000.000000000000000);

        gridLayout_3->addWidget(DzField, 3, 2, 1, 1);

        DyField = new QDoubleSpinBox(groupBox);
        DyField->setObjectName(QString::fromUtf8("DyField"));
        sizePolicy1.setHeightForWidth(DyField->sizePolicy().hasHeightForWidth());
        DyField->setSizePolicy(sizePolicy1);
        DyField->setMinimum(-10000.000000000000000);
        DyField->setMaximum(10000.000000000000000);

        gridLayout_3->addWidget(DyField, 2, 2, 1, 1);

        DxField = new QDoubleSpinBox(groupBox);
        DxField->setObjectName(QString::fromUtf8("DxField"));
        sizePolicy1.setHeightForWidth(DxField->sizePolicy().hasHeightForWidth());
        DxField->setSizePolicy(sizePolicy1);
        DxField->setMinimum(-10000.000000000000000);
        DxField->setMaximum(10000.000000000000000);

        gridLayout_3->addWidget(DxField, 1, 2, 1, 1);

        MoveButton = new QPushButton(groupBox);
        MoveButton->setObjectName(QString::fromUtf8("MoveButton"));
        sizePolicy2.setHeightForWidth(MoveButton->sizePolicy().hasHeightForWidth());
        MoveButton->setSizePolicy(sizePolicy2);
        MoveButton->setFlat(false);

        gridLayout_3->addWidget(MoveButton, 5, 1, 1, 2);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_11, 3, 1, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_10, 2, 1, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_12, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 4, 5, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 0, 5, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 3, 0, 1, 1);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setAlignment(Qt::AlignCenter);
        gridLayout_7 = new QGridLayout(groupBox_3);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_16, 2, 0, 1, 1);

        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_17, 1, 0, 1, 1);

        AxField = new QDoubleSpinBox(groupBox_3);
        AxField->setObjectName(QString::fromUtf8("AxField"));
        sizePolicy1.setHeightForWidth(AxField->sizePolicy().hasHeightForWidth());
        AxField->setSizePolicy(sizePolicy1);
        AxField->setMinimum(-10000.000000000000000);
        AxField->setMaximum(10000.000000000000000);

        gridLayout_2->addWidget(AxField, 0, 1, 1, 1);

        AyField = new QDoubleSpinBox(groupBox_3);
        AyField->setObjectName(QString::fromUtf8("AyField"));
        sizePolicy1.setHeightForWidth(AyField->sizePolicy().hasHeightForWidth());
        AyField->setSizePolicy(sizePolicy1);
        AyField->setMinimum(-10000.000000000000000);
        AyField->setMaximum(10000.000000000000000);

        gridLayout_2->addWidget(AyField, 1, 1, 1, 1);

        AzField = new QDoubleSpinBox(groupBox_3);
        AzField->setObjectName(QString::fromUtf8("AzField"));
        sizePolicy1.setHeightForWidth(AzField->sizePolicy().hasHeightForWidth());
        AzField->setSizePolicy(sizePolicy1);
        AzField->setMinimum(-10000.000000000000000);
        AzField->setMaximum(10000.000000000000000);

        gridLayout_2->addWidget(AzField, 2, 1, 1, 1);

        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        sizePolicy1.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy1);
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_18, 0, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_2, 1, 2, 1, 2);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        sizePolicy1.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy1);
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_10->addWidget(label_19, 0, 0, 1, 1);

        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy1.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy1);
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_10->addWidget(label_20, 1, 0, 1, 1);

        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy1.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy1);
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_10->addWidget(label_21, 2, 0, 1, 1);

        CRxField = new QDoubleSpinBox(groupBox_3);
        CRxField->setObjectName(QString::fromUtf8("CRxField"));
        CRxField->setMinimum(-10000.000000000000000);
        CRxField->setMaximum(10000.000000000000000);

        gridLayout_10->addWidget(CRxField, 0, 1, 1, 1);

        CRyField = new QDoubleSpinBox(groupBox_3);
        CRyField->setObjectName(QString::fromUtf8("CRyField"));
        CRyField->setMinimum(-10000.000000000000000);
        CRyField->setMaximum(10000.000000000000000);

        gridLayout_10->addWidget(CRyField, 1, 1, 1, 1);

        CRzField = new QDoubleSpinBox(groupBox_3);
        CRzField->setObjectName(QString::fromUtf8("CRzField"));
        CRzField->setMinimum(-10000.000000000000000);
        CRzField->setMaximum(10000.000000000000000);

        gridLayout_10->addWidget(CRzField, 2, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_10, 1, 0, 1, 2);

        RotateButton = new QPushButton(groupBox_3);
        RotateButton->setObjectName(QString::fromUtf8("RotateButton"));
        sizePolicy2.setHeightForWidth(RotateButton->sizePolicy().hasHeightForWidth());
        RotateButton->setSizePolicy(sizePolicy2);
        RotateButton->setFlat(false);

        gridLayout_8->addWidget(RotateButton, 5, 0, 1, 4);


        gridLayout_7->addLayout(gridLayout_8, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_5, 0, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_6, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_3, 3, 2, 1, 1);

        LoadFigureButton = new QPushButton(centralwidget);
        LoadFigureButton->setObjectName(QString::fromUtf8("LoadFigureButton"));

        gridLayout->addWidget(LoadFigureButton, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1079, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Center X", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Center Y", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Center Z", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "kX", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "kY", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "kZ", nullptr));
        ScaleButton->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\275\320\276\321\201", nullptr));
        MoveButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\274\320\265\321\201\321\202\320\270\321\202\321\214", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "dZ", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "dY", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "dX", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Angle Z", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Angle Y", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Angle X", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Center X", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Center Y", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Center Z", nullptr));
        RotateButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\320\265\321\200\320\275\321\203\321\202\321\214", nullptr));
        LoadFigureButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\204\320\270\320\263\321\203\321\200\321\203 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
