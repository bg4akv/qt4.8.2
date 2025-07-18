/********************************************************************************
** Form generated from reading UI file 'qprintwidget.ui'
**
** Created: Tue Jul 15 14:40:41 2025
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPRINTWIDGET_H
#define UI_QPRINTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QPrintWidget
{
public:
    QHBoxLayout *hboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *printers;
    QPushButton *properties;
    QLabel *location;
    QLabel *label2;
    QCheckBox *preview;
    QLabel *type;
    QLabel *label4;
    QLabel *lOutput;
    QHBoxLayout *hboxLayout1;
    QLineEdit *filename;
    QToolButton *fileBrowser;

    void setupUi(QWidget *widget)
    {
        if (widget->objectName().isEmpty())
            widget->setObjectName(QString::fromUtf8("widget"));
        widget->resize(443, 175);
        hboxLayout = new QHBoxLayout(widget);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        printers = new QComboBox(groupBox);
        printers->setObjectName(QString::fromUtf8("printers"));
        QSizePolicy sizePolicy;
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(printers->sizePolicy().hasHeightForWidth());
        printers->setSizePolicy(sizePolicy);

        gridLayout->addWidget(printers, 0, 0, 1, 1);

        properties = new QPushButton(groupBox);
        properties->setObjectName(QString::fromUtf8("properties"));
        QSizePolicy sizePolicy1;
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(properties->sizePolicy().hasHeightForWidth());
        properties->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(properties, 0, 0, 1, 1);

        location = new QLabel(groupBox);
        location->setObjectName(QString::fromUtf8("location"));

        gridLayout->addWidget(location, 1, 0, 1, 1);

        label2 = new QLabel(groupBox);
        label2->setObjectName(QString::fromUtf8("label2"));

        gridLayout->addWidget(label2, 1, 0, 1, 1);

        preview = new QCheckBox(groupBox);
        preview->setObjectName(QString::fromUtf8("preview"));

        gridLayout->addWidget(preview, 1, 0, 1, 1);

        type = new QLabel(groupBox);
        type->setObjectName(QString::fromUtf8("type"));

        gridLayout->addWidget(type, 2, 0, 1, 1);

        label4 = new QLabel(groupBox);
        label4->setObjectName(QString::fromUtf8("label4"));

        gridLayout->addWidget(label4, 2, 0, 1, 1);

        lOutput = new QLabel(groupBox);
        lOutput->setObjectName(QString::fromUtf8("lOutput"));

        gridLayout->addWidget(lOutput, 3, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        filename = new QLineEdit(groupBox);
        filename->setObjectName(QString::fromUtf8("filename"));

        hboxLayout1->addWidget(filename);

        fileBrowser = new QToolButton(groupBox);
        fileBrowser->setObjectName(QString::fromUtf8("fileBrowser"));

        hboxLayout1->addWidget(fileBrowser);


        gridLayout->addLayout(hboxLayout1, 3, 0, 1, 1);


        hboxLayout->addWidget(groupBox);

#ifndef QT_NO_SHORTCUT
#endif // QT_NO_SHORTCUT

        retranslateUi(widget);

        QMetaObject::connectSlotsByName(widget);
    } // setupUi

    void retranslateUi(QWidget *widget)
    {
        widget->setWindowTitle(QApplication::translate("QPrintWidget", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QPrintWidget", "Printer", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QPrintWidget", "&Name:", 0, QApplication::UnicodeUTF8));
        properties->setText(QApplication::translate("QPrintWidget", "P&roperties", 0, QApplication::UnicodeUTF8));
        location->setText(QApplication::translate("QPrintWidget", "Location:", 0, QApplication::UnicodeUTF8));
        preview->setText(QApplication::translate("QPrintWidget", "Preview", 0, QApplication::UnicodeUTF8));
        type->setText(QApplication::translate("QPrintWidget", "Type:", 0, QApplication::UnicodeUTF8));
        lOutput->setText(QApplication::translate("QPrintWidget", "Output &file:", 0, QApplication::UnicodeUTF8));
        fileBrowser->setText(QApplication::translate("QPrintWidget", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QPrintWidget: public Ui_QPrintWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPRINTWIDGET_H
