/********************************************************************************
** Form generated from reading UI file 'qpagesetupwidget.ui'
**
** Created: Tue Jul 15 14:40:41 2025
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPAGESETUPWIDGET_H
#define UI_QPAGESETUPWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QPageSetupWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QComboBox *unit;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *pageSizeLabel;
    QComboBox *paperSize;
    QLabel *widthLabel;
    QHBoxLayout *hboxLayout1;
    QDoubleSpinBox *paperWidth;
    QLabel *heightLabel;
    QDoubleSpinBox *paperHeight;
    QLabel *paperSourceLabel;
    QComboBox *paperSource;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox1;
    QVBoxLayout *vboxLayout;
    QRadioButton *portrait;
    QRadioButton *landscape;
    QRadioButton *reverseLandscape;
    QRadioButton *reversePortrait;
    QSpacerItem *verticalSpacer_5;
    QWidget *preview;
    QGroupBox *groupBox2;
    QHBoxLayout *hboxLayout2;
    QGridLayout *gridLayout2;
    QDoubleSpinBox *topMargin;
    QHBoxLayout *hboxLayout3;
    QSpacerItem *horizontalSpacer_7;
    QDoubleSpinBox *leftMargin;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *rightMargin;
    QSpacerItem *horizontalSpacer_8;
    QDoubleSpinBox *bottomMargin;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *widget)
    {
        if (widget->objectName().isEmpty())
            widget->setObjectName(QString::fromUtf8("widget"));
        widget->resize(416, 488);
        gridLayout = new QGridLayout(widget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        unit = new QComboBox(widget);
        unit->setObjectName(QString::fromUtf8("comboBox"));

        hboxLayout->addWidget(unit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_3);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        pageSizeLabel = new QLabel(groupBox);
        pageSizeLabel->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(pageSizeLabel, 0, 0, 1, 1);

        paperSize = new QComboBox(groupBox);
        paperSize->setObjectName(QString::fromUtf8("comboBox1"));

        gridLayout1->addWidget(paperSize, 0, 0, 1, 1);

        widthLabel = new QLabel(groupBox);
        widthLabel->setObjectName(QString::fromUtf8("label1"));

        gridLayout1->addWidget(widthLabel, 1, 0, 1, 1);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        paperWidth = new QDoubleSpinBox(groupBox);
        paperWidth->setObjectName(QString::fromUtf8("doubleSpinBox"));
        paperWidth->setMaximum(9999.99);

        hboxLayout1->addWidget(paperWidth);

        heightLabel = new QLabel(groupBox);
        heightLabel->setObjectName(QString::fromUtf8("label2"));

        hboxLayout1->addWidget(heightLabel);

        paperHeight = new QDoubleSpinBox(groupBox);
        paperHeight->setObjectName(QString::fromUtf8("doubleSpinBox1"));
        paperHeight->setMaximum(9999.99);

        hboxLayout1->addWidget(paperHeight);


        gridLayout1->addLayout(hboxLayout1, 1, 0, 1, 1);

        paperSourceLabel = new QLabel(groupBox);
        paperSourceLabel->setObjectName(QString::fromUtf8("label3"));

        gridLayout1->addWidget(paperSourceLabel, 2, 0, 1, 1);

        paperSource = new QComboBox(groupBox);
        paperSource->setObjectName(QString::fromUtf8("comboBox2"));

        gridLayout1->addWidget(paperSource, 2, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(horizontalSpacer_4, 1, 0, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        groupBox1 = new QGroupBox(widget);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        vboxLayout = new QVBoxLayout(groupBox1);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        portrait = new QRadioButton(groupBox1);
        portrait->setObjectName(QString::fromUtf8("radioButton"));
        portrait->setChecked(true);

        vboxLayout->addWidget(portrait);

        landscape = new QRadioButton(groupBox1);
        landscape->setObjectName(QString::fromUtf8("radioButton1"));

        vboxLayout->addWidget(landscape);

        reverseLandscape = new QRadioButton(groupBox1);
        reverseLandscape->setObjectName(QString::fromUtf8("radioButton2"));

        vboxLayout->addWidget(reverseLandscape);

        reversePortrait = new QRadioButton(groupBox1);
        reversePortrait->setObjectName(QString::fromUtf8("radioButton3"));

        vboxLayout->addWidget(reversePortrait);

        verticalSpacer_5 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer_5);


        gridLayout->addWidget(groupBox1, 2, 0, 1, 1);

        preview = new QWidget(widget);
        preview->setObjectName(QString::fromUtf8("widget1"));

        gridLayout->addWidget(preview, 0, 0, 2, 1);

        groupBox2 = new QGroupBox(widget);
        groupBox2->setObjectName(QString::fromUtf8("groupBox2"));
        hboxLayout2 = new QHBoxLayout(groupBox2);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        gridLayout2 = new QGridLayout();
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        topMargin = new QDoubleSpinBox(groupBox2);
        topMargin->setObjectName(QString::fromUtf8("doubleSpinBox2"));
        topMargin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        topMargin->setMaximum(999.99);

        gridLayout2->addWidget(topMargin, 0, 0, 1, 1);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        horizontalSpacer_7 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(horizontalSpacer_7);

        leftMargin = new QDoubleSpinBox(groupBox2);
        leftMargin->setObjectName(QString::fromUtf8("doubleSpinBox3"));
        leftMargin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leftMargin->setMaximum(999.99);

        hboxLayout3->addWidget(leftMargin);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(horizontalSpacer);

        rightMargin = new QDoubleSpinBox(groupBox2);
        rightMargin->setObjectName(QString::fromUtf8("doubleSpinBox4"));
        rightMargin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        rightMargin->setMaximum(999.99);

        hboxLayout3->addWidget(rightMargin);

        horizontalSpacer_8 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(horizontalSpacer_8);


        gridLayout2->addLayout(hboxLayout3, 1, 0, 1, 1);

        bottomMargin = new QDoubleSpinBox(groupBox2);
        bottomMargin->setObjectName(QString::fromUtf8("doubleSpinBox5"));
        bottomMargin->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        bottomMargin->setMaximum(999.99);

        gridLayout2->addWidget(bottomMargin, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout2->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(0, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout2->addItem(horizontalSpacer_5, 0, 0, 1, 1);


        hboxLayout2->addLayout(gridLayout2);


        gridLayout->addWidget(groupBox2, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
#endif // QT_NO_SHORTCUT

        retranslateUi(widget);

        QMetaObject::connectSlotsByName(widget);
    } // setupUi

    void retranslateUi(QWidget *widget)
    {
        widget->setWindowTitle(QApplication::translate("QPageSetupWidget", "Form", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QPageSetupWidget", "Paper", 0, QApplication::UnicodeUTF8));
        pageSizeLabel->setText(QApplication::translate("QPageSetupWidget", "Page size:", 0, QApplication::UnicodeUTF8));
        widthLabel->setText(QApplication::translate("QPageSetupWidget", "Width:", 0, QApplication::UnicodeUTF8));
        heightLabel->setText(QApplication::translate("QPageSetupWidget", "Height:", 0, QApplication::UnicodeUTF8));
        paperSourceLabel->setText(QApplication::translate("QPageSetupWidget", "Paper source:", 0, QApplication::UnicodeUTF8));
        groupBox1->setTitle(QApplication::translate("QPageSetupWidget", "Orientation", 0, QApplication::UnicodeUTF8));
        portrait->setText(QApplication::translate("QPageSetupWidget", "Portrait", 0, QApplication::UnicodeUTF8));
        landscape->setText(QApplication::translate("QPageSetupWidget", "Landscape", 0, QApplication::UnicodeUTF8));
        reverseLandscape->setText(QApplication::translate("QPageSetupWidget", "Reverse landscape", 0, QApplication::UnicodeUTF8));
        reversePortrait->setText(QApplication::translate("QPageSetupWidget", "Reverse portrait", 0, QApplication::UnicodeUTF8));
        groupBox2->setTitle(QApplication::translate("QPageSetupWidget", "Margins", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        topMargin->setToolTip(QApplication::translate("QPageSetupWidget", "top margin", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        topMargin->setAccessibleName(QApplication::translate("QPageSetupWidget", "top margin", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        leftMargin->setToolTip(QApplication::translate("QPageSetupWidget", "left margin", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        leftMargin->setAccessibleName(QApplication::translate("QPageSetupWidget", "left margin", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        rightMargin->setToolTip(QApplication::translate("QPageSetupWidget", "right margin", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        rightMargin->setAccessibleName(QApplication::translate("QPageSetupWidget", "right margin", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        bottomMargin->setToolTip(QApplication::translate("QPageSetupWidget", "bottom margin", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        bottomMargin->setAccessibleName(QApplication::translate("QPageSetupWidget", "bottom margin", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
    } // retranslateUi

};

namespace Ui {
    class QPageSetupWidget: public Ui_QPageSetupWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPAGESETUPWIDGET_H
