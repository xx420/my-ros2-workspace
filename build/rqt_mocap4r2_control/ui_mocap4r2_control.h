/********************************************************************************
** Form generated from reading UI file 'mocap4r2_control.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOCAP4R2_CONTROL_H
#define UI_MOCAP4R2_CONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mocapControlWidget
{
public:
    QPushButton *startButton;
    QTreeWidget *treeWidget;
    QCheckBox *recordAllCheckBox;
    QCheckBox *activeAllCheckBox;
    QPlainTextEdit *sessionTextEdit;
    QLabel *label;
    QGroupBox *groupBox;
    QRadioButton *rosbagModeRadioButton;
    QRadioButton *csvModeRadioButton;
    QCheckBox *enableROS1checkBox;
    QPushButton *selectOutputDirpushButton;

    void setupUi(QWidget *mocapControlWidget)
    {
        if (mocapControlWidget->objectName().isEmpty())
            mocapControlWidget->setObjectName(QString::fromUtf8("mocapControlWidget"));
        mocapControlWidget->resize(521, 414);
        startButton = new QPushButton(mocapControlWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(10, 10, 89, 25));
        treeWidget = new QTreeWidget(mocapControlWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(10, 80, 441, 191));
        recordAllCheckBox = new QCheckBox(mocapControlWidget);
        recordAllCheckBox->setObjectName(QString::fromUtf8("recordAllCheckBox"));
        recordAllCheckBox->setGeometry(QRect(300, 50, 92, 23));
        activeAllCheckBox = new QCheckBox(mocapControlWidget);
        activeAllCheckBox->setObjectName(QString::fromUtf8("activeAllCheckBox"));
        activeAllCheckBox->setGeometry(QRect(10, 50, 92, 23));
        sessionTextEdit = new QPlainTextEdit(mocapControlWidget);
        sessionTextEdit->setObjectName(QString::fromUtf8("sessionTextEdit"));
        sessionTextEdit->setGeometry(QRect(210, 10, 251, 31));
        label = new QLabel(mocapControlWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 10, 81, 31));
        groupBox = new QGroupBox(mocapControlWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 300, 120, 80));
        rosbagModeRadioButton = new QRadioButton(groupBox);
        rosbagModeRadioButton->setObjectName(QString::fromUtf8("rosbagModeRadioButton"));
        rosbagModeRadioButton->setEnabled(false);
        rosbagModeRadioButton->setGeometry(QRect(0, 20, 112, 23));
        csvModeRadioButton = new QRadioButton(groupBox);
        csvModeRadioButton->setObjectName(QString::fromUtf8("csvModeRadioButton"));
        csvModeRadioButton->setGeometry(QRect(0, 40, 112, 23));
        csvModeRadioButton->setChecked(true);
        enableROS1checkBox = new QCheckBox(mocapControlWidget);
        enableROS1checkBox->setObjectName(QString::fromUtf8("enableROS1checkBox"));
        enableROS1checkBox->setGeometry(QRect(20, 280, 151, 23));
        selectOutputDirpushButton = new QPushButton(mocapControlWidget);
        selectOutputDirpushButton->setObjectName(QString::fromUtf8("selectOutputDirpushButton"));
        selectOutputDirpushButton->setGeometry(QRect(20, 380, 431, 25));

        retranslateUi(mocapControlWidget);

        QMetaObject::connectSlotsByName(mocapControlWidget);
    } // setupUi

    void retranslateUi(QWidget *mocapControlWidget)
    {
        mocapControlWidget->setWindowTitle(QCoreApplication::translate("mocapControlWidget", "MocapControl", nullptr));
        startButton->setText(QCoreApplication::translate("mocapControlWidget", "Start", nullptr));
        recordAllCheckBox->setText(QCoreApplication::translate("mocapControlWidget", "record All", nullptr));
        activeAllCheckBox->setText(QCoreApplication::translate("mocapControlWidget", "active All", nullptr));
        sessionTextEdit->setPlainText(QCoreApplication::translate("mocapControlWidget", "default_session", nullptr));
        label->setText(QCoreApplication::translate("mocapControlWidget", "session", nullptr));
        groupBox->setTitle(QCoreApplication::translate("mocapControlWidget", "Record mode", nullptr));
#if QT_CONFIG(tooltip)
        rosbagModeRadioButton->setToolTip(QCoreApplication::translate("mocapControlWidget", "Not implemented yet", nullptr));
#endif // QT_CONFIG(tooltip)
        rosbagModeRadioButton->setText(QCoreApplication::translate("mocapControlWidget", "rosbag", nullptr));
        csvModeRadioButton->setText(QCoreApplication::translate("mocapControlWidget", "csv", nullptr));
        enableROS1checkBox->setText(QCoreApplication::translate("mocapControlWidget", "ROS1 Support", nullptr));
        selectOutputDirpushButton->setText(QCoreApplication::translate("mocapControlWidget", "/tmp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mocapControlWidget: public Ui_mocapControlWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOCAP4R2_CONTROL_H
