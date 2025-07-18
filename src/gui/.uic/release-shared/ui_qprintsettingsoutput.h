/********************************************************************************
** Form generated from reading UI file 'qprintsettingsoutput.ui'
**
** Created: Tue Jul 15 14:40:41 2025
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPRINTSETTINGSOUTPUT_H
#define UI_QPRINTSETTINGSOUTPUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QPrintSettingsOutput
{
public:
    QHBoxLayout *hboxLayout;
    QTabWidget *tabs;
    QWidget *widget1;
    QHBoxLayout *hboxLayout1;
    QGroupBox *gbPrintRange;
    QVBoxLayout *vboxLayout;
    QRadioButton *printAll;
    QHBoxLayout *hboxLayout2;
    QRadioButton *printRange;
    QSpinBox *from;
    QLabel *label;
    QSpinBox *to;
    QSpacerItem *spacerItem;
    QRadioButton *printCurrentPage;
    QRadioButton *printSelection;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox1;
    QGridLayout *gridLayout;
    QLabel *label1;
    QSpinBox *copies;
    QSpacerItem *horizontalSpacer;
    QCheckBox *collate;
    QLabel *label2;
    QCheckBox *reverse;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget2;
    QGridLayout *gridLayout1;
    QGroupBox *groupBox2;
    QGridLayout *gridLayout2;
    QSpacerItem *verticalSpacer_6;
    QRadioButton *color;
    QLabel *label3;
    QRadioButton *grayscale;
    QGroupBox *duplex;
    QVBoxLayout *vboxLayout1;
    QRadioButton *noDuplex;
    QRadioButton *duplexLong;
    QRadioButton *duplexShort;
    QSpacerItem *verticalSpacer_42;

    void setupUi(QWidget *widget)
    {
        if (widget->objectName().isEmpty())
            widget->setObjectName(QString::fromUtf8("widget"));
        widget->resize(426, 171);
        hboxLayout = new QHBoxLayout(widget);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        tabs = new QTabWidget(widget);
        tabs->setObjectName(QString::fromUtf8("tabs"));
        widget1 = new QWidget();
        widget1->setObjectName(QString::fromUtf8("widget1"));
        hboxLayout1 = new QHBoxLayout(widget1);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        gbPrintRange = new QGroupBox(widget1);
        gbPrintRange->setObjectName(QString::fromUtf8("gbPrintRange"));
        QSizePolicy sizePolicy;
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gbPrintRange->sizePolicy().hasHeightForWidth());
        gbPrintRange->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(gbPrintRange);
        vboxLayout->setSpacing(4);
        vboxLayout->setContentsMargins(6, 6, 6, 6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        printAll = new QRadioButton(gbPrintRange);
        printAll->setObjectName(QString::fromUtf8("printAll"));
        printAll->setChecked(true);

        vboxLayout->addWidget(printAll);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        printRange = new QRadioButton(gbPrintRange);
        printRange->setObjectName(QString::fromUtf8("printRange"));

        hboxLayout2->addWidget(printRange);

        from = new QSpinBox(gbPrintRange);
        from->setObjectName(QString::fromUtf8("from"));
        from->setEnabled(false);
        from->setMinimum(1);
        from->setMaximum(999);

        hboxLayout2->addWidget(from);

        label = new QLabel(gbPrintRange);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout2->addWidget(label);

        to = new QSpinBox(gbPrintRange);
        to->setObjectName(QString::fromUtf8("to"));
        to->setEnabled(false);
        to->setMinimum(1);
        to->setMaximum(999);

        hboxLayout2->addWidget(to);

        spacerItem = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem);


        vboxLayout->addLayout(hboxLayout2);

        printCurrentPage = new QRadioButton(gbPrintRange);
        printCurrentPage->setObjectName(QString::fromUtf8("printCurrentPage"));

        vboxLayout->addWidget(printCurrentPage);

        printSelection = new QRadioButton(gbPrintRange);
        printSelection->setObjectName(QString::fromUtf8("printSelection"));

        vboxLayout->addWidget(printSelection);

        verticalSpacer = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer);


        hboxLayout1->addWidget(gbPrintRange);

        groupBox1 = new QGroupBox(widget1);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        gridLayout = new QGridLayout(groupBox1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label1 = new QLabel(groupBox1);
        label1->setObjectName(QString::fromUtf8("label1"));

        gridLayout->addWidget(label1, 0, 0, 1, 1);

        copies = new QSpinBox(groupBox1);
        copies->setObjectName(QString::fromUtf8("copies"));
        copies->setMinimum(1);
        copies->setMaximum(999);

        gridLayout->addWidget(copies, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(91, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        collate = new QCheckBox(groupBox1);
        collate->setObjectName(QString::fromUtf8("collate"));

        gridLayout->addWidget(collate, 1, 0, 1, 1);

        label2 = new QLabel(groupBox1);
        label2->setObjectName(QString::fromUtf8("label2"));
        QSizePolicy sizePolicy1;
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label2->sizePolicy().hasHeightForWidth());
        label2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label2, 1, 0, 1, 1);

        reverse = new QCheckBox(reverse);
        reverse->setObjectName(QString::fromUtf8("reverse"));

        gridLayout->addWidget(reverse, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(0, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);


        hboxLayout1->addWidget(groupBox1);

        tabs->addTab(widget1, QString());
        widget2 = new QWidget();
        widget2->setObjectName(QString::fromUtf8("widget2"));
        gridLayout1 = new QGridLayout(widget2);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        groupBox2 = new QGroupBox(widget2);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        gridLayout2 = new QGridLayout(groupBox2);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        verticalSpacer_6 = new QSpacerItem(1, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(verticalSpacer_6, 2, 0, 1, 1);

        color = new QRadioButton(groupBox2);
        color->setObjectName(QString::fromUtf8("color"));

        gridLayout2->addWidget(color, 0, 0, 1, 1);

        label3 = new QLabel(groupBox2);
        label3->setObjectName(QString::fromUtf8("label3"));

        gridLayout2->addWidget(label3, 0, 0, 1, 1);

        grayscale = new QRadioButton(groupBox2);
        grayscale->setObjectName(QString::fromUtf8("grayscale"));

        gridLayout2->addWidget(grayscale, 1, 0, 1, 1);


        gridLayout1->addWidget(groupBox2, 0, 0, 1, 1);

        duplex = new QGroupBox(widget2);
        duplex->setObjectName(QString::fromUtf8("duplex"));
        vboxLayout1 = new QVBoxLayout(duplex);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        noDuplex = new QRadioButton(duplex);
        noDuplex->setObjectName(QString::fromUtf8("noDuplex"));
        noDuplex->setChecked(true);

        vboxLayout1->addWidget(noDuplex);

        duplexLong = new QRadioButton(duplex);
        duplexLong->setObjectName(QString::fromUtf8("duplexLong"));

        vboxLayout1->addWidget(duplexLong);

        duplexShort = new QRadioButton(duplex);
        duplexShort->setObjectName(QString::fromUtf8("duplexShort"));

        vboxLayout1->addWidget(duplexShort);

        verticalSpacer_42 = new QSpacerItem(1, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(verticalSpacer_42);


        gridLayout1->addWidget(duplex, 0, 0, 1, 1);

        tabs->addTab(widget2, QString());

        hboxLayout->addWidget(tabs);

#ifndef QT_NO_SHORTCUT
#endif // QT_NO_SHORTCUT

        retranslateUi(widget);

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(widget);
    } // setupUi

    void retranslateUi(QWidget *widget)
    {
        widget->setWindowTitle(QApplication::translate("QPrintSettingsOutput", "Form", 0, QApplication::UnicodeUTF8));
        gbPrintRange->setTitle(QApplication::translate("QPrintSettingsOutput", "Print range", 0, QApplication::UnicodeUTF8));
        printAll->setText(QApplication::translate("QPrintSettingsOutput", "Print all", 0, QApplication::UnicodeUTF8));
        printRange->setText(QApplication::translate("QPrintSettingsOutput", "Pages from", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QPrintSettingsOutput", "to", 0, QApplication::UnicodeUTF8));
        printCurrentPage->setText(QApplication::translate("QPrintSettingsOutput", "Current Page", 0, QApplication::UnicodeUTF8));
        printSelection->setText(QApplication::translate("QPrintSettingsOutput", "Selection", 0, QApplication::UnicodeUTF8));
        groupBox1->setTitle(QApplication::translate("QPrintSettingsOutput", "Output Settings", 0, QApplication::UnicodeUTF8));
        label1->setText(QApplication::translate("QPrintSettingsOutput", "Copies:", 0, QApplication::UnicodeUTF8));
        collate->setText(QApplication::translate("QPrintSettingsOutput", "Collate", 0, QApplication::UnicodeUTF8));
        reverse->setText(QApplication::translate("QPrintSettingsOutput", "Reverse", 0, QApplication::UnicodeUTF8));
        tabs->setTabText(tabs->indexOf(widget1), QApplication::translate("QPrintSettingsOutput", "Copies", 0, QApplication::UnicodeUTF8));
        groupBox2->setTitle(QApplication::translate("QPrintSettingsOutput", "Color Mode", 0, QApplication::UnicodeUTF8));
        color->setText(QApplication::translate("QPrintSettingsOutput", "Color", 0, QApplication::UnicodeUTF8));
        grayscale->setText(QApplication::translate("QPrintSettingsOutput", "Grayscale", 0, QApplication::UnicodeUTF8));
        duplex->setTitle(QApplication::translate("QPrintSettingsOutput", "Duplex Printing", 0, QApplication::UnicodeUTF8));
        noDuplex->setText(QApplication::translate("QPrintSettingsOutput", "None", 0, QApplication::UnicodeUTF8));
        duplexLong->setText(QApplication::translate("QPrintSettingsOutput", "Long side", 0, QApplication::UnicodeUTF8));
        duplexShort->setText(QApplication::translate("QPrintSettingsOutput", "Short side", 0, QApplication::UnicodeUTF8));
        tabs->setTabText(tabs->indexOf(widget2), QApplication::translate("QPrintSettingsOutput", "Options", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QPrintSettingsOutput: public Ui_QPrintSettingsOutput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPRINTSETTINGSOUTPUT_H
