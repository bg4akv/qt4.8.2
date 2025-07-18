/********************************************************************************
** Form generated from reading UI file 'qprintpropertieswidget.ui'
**
** Created: Tue Jul 15 15:29:33 2025
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPRINTPROPERTIESWIDGET_H
#define UI_QPRINTPROPERTIESWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTabWidget>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qpagesetupdialog_unix_p.h"

QT_BEGIN_NAMESPACE

class Ui_QPrintPropertiesWidget
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabs;
    QWidget *tabPage;
    QHBoxLayout *hboxLayout;
    QPageSetupWidget *pageSetup;
    QWidget *cupsPropertiesPage;
    QHBoxLayout *hboxLayout1;
    QTreeView *treeView;

    void setupUi(QWidget *widget)
    {
        if (widget->objectName().isEmpty())
            widget->setObjectName(QString::fromUtf8("widget"));
        widget->resize(396, 288);
        vboxLayout = new QVBoxLayout(widget);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabs = new QTabWidget(widget);
        tabs->setObjectName(QString::fromUtf8("tabs"));
        tabPage = new QWidget();
        tabPage->setObjectName(QString::fromUtf8("cupsPropertiesPage"));
        tabPage->setGeometry(QRect(0, 0, 392, 261));
        hboxLayout = new QHBoxLayout(tabPage);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        pageSetup = new QPageSetupWidget(tabPage);
        pageSetup->setObjectName(QString::fromUtf8("pageSetup"));

        hboxLayout->addWidget(pageSetup);

        tabs->addTab(tabPage, QString());
        cupsPropertiesPage = new QWidget();
        cupsPropertiesPage->setObjectName(QString::fromUtf8("widget2"));
        hboxLayout1 = new QHBoxLayout(cupsPropertiesPage);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        treeView = new QTreeView(cupsPropertiesPage);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setAlternatingRowColors(true);

        hboxLayout1->addWidget(treeView);

        tabs->addTab(cupsPropertiesPage, QString());

        vboxLayout->addWidget(tabs);


        retranslateUi(widget);

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(widget);
    } // setupUi

    void retranslateUi(QWidget *widget)
    {
        widget->setWindowTitle(QApplication::translate("QPrintPropertiesWidget", "Form", 0, QApplication::UnicodeUTF8));
        tabs->setTabText(tabs->indexOf(tabPage), QApplication::translate("QPrintPropertiesWidget", "Page", 0, QApplication::UnicodeUTF8));
        tabs->setTabText(tabs->indexOf(cupsPropertiesPage), QApplication::translate("QPrintPropertiesWidget", "Advanced", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QPrintPropertiesWidget: public Ui_QPrintPropertiesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPRINTPROPERTIESWIDGET_H
