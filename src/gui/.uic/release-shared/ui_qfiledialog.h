/*
*********************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the QtGui module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
** $QT_END_LICENSE$
**
*********************************************************************
*/

/********************************************************************************
** Form generated from reading UI file 'qfiledialog.ui'
**
** Created: Tue Jul 15 15:29:33 2025
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QFILEDIALOG_H
#define UI_QFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qfiledialog_p.h"
#include "qsidebar_p.h"

QT_BEGIN_NAMESPACE

class Ui_QFileDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *lookInLabel;
    QHBoxLayout *hboxLayout;
    QFileDialogComboBox *lookInCombo;
    QToolButton *backButton;
    QToolButton *forwardButton;
    QToolButton *toParentButton;
    QToolButton *newFolderButton;
    QToolButton *listModeButton;
    QToolButton *detailModeButton;
    QSplitter *splitter;
    QSidebar *sidebar;
    QFrame *frame;
    QVBoxLayout *vboxLayout;
    QStackedWidget *stackedWidget;
    QWidget *widget;
    QVBoxLayout *vboxLayout1;
    QFileDialogListView *listView;
    QWidget *widget1;
    QVBoxLayout *vboxLayout2;
    QFileDialogTreeView *treeView;
    QLabel *fileNameLabel;
    QFileDialogLineEdit *fileNameEdit;
    QDialogButtonBox *buttonBox;
    QLabel *fileTypeLabel;
    QComboBox *fileTypeCombo;

    void setupUi(QDialog *dialog)
    {
        if (dialog->objectName().isEmpty())
            dialog->setObjectName(QString::fromUtf8("dialog"));
        dialog->resize(521, 316);
        dialog->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(dialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lookInLabel = new QLabel(dialog);
        lookInLabel->setObjectName(QString::fromUtf8("lookInLabel"));

        gridLayout->addWidget(lookInLabel, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lookInCombo = new QFileDialogComboBox(dialog);
        lookInCombo->setObjectName(QString::fromUtf8("lookInCombo"));
        QSizePolicy sizePolicy;
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lookInCombo->sizePolicy().hasHeightForWidth());
        lookInCombo->setSizePolicy(sizePolicy);
        lookInCombo->setMinimumSize(QSize(50, 0));

        hboxLayout->addWidget(lookInCombo);

        backButton = new QToolButton(dialog);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        hboxLayout->addWidget(backButton);

        forwardButton = new QToolButton(dialog);
        forwardButton->setObjectName(QString::fromUtf8("forwardButton"));

        hboxLayout->addWidget(forwardButton);

        toParentButton = new QToolButton(dialog);
        toParentButton->setObjectName(QString::fromUtf8("toParentButton"));

        hboxLayout->addWidget(toParentButton);

        newFolderButton = new QToolButton(dialog);
        newFolderButton->setObjectName(QString::fromUtf8("newFolderButton"));

        hboxLayout->addWidget(newFolderButton);

        listModeButton = new QToolButton(dialog);
        listModeButton->setObjectName(QString::fromUtf8("listModeButton"));

        hboxLayout->addWidget(listModeButton);

        detailModeButton = new QToolButton(dialog);
        detailModeButton->setObjectName(QString::fromUtf8("detailModeButton"));

        hboxLayout->addWidget(detailModeButton);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        splitter = new QSplitter(dialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy1;
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setOrientation(Qt::Horizontal);
        sidebar = new QSidebar(splitter);
        sidebar->setObjectName(QString::fromUtf8("sidebar"));
        splitter->addWidget(sidebar);
        frame = new QFrame(splitter);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        vboxLayout = new QVBoxLayout(frame);
        vboxLayout->setSpacing(0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        vboxLayout1 = new QVBoxLayout(widget);
        vboxLayout1->setSpacing(0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        listView = new QFileDialogListView(widget);
        listView->setObjectName(QString::fromUtf8("listView"));

        vboxLayout1->addWidget(listView);

        stackedWidget->addWidget(widget);
        widget1 = new QWidget();
        widget1->setObjectName(QString::fromUtf8("widget1"));
        vboxLayout2 = new QVBoxLayout(widget1);
        vboxLayout2->setSpacing(0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        treeView = new QFileDialogTreeView(widget1);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        vboxLayout2->addWidget(treeView);

        stackedWidget->addWidget(widget1);

        vboxLayout->addWidget(stackedWidget);

        splitter->addWidget(frame);

        gridLayout->addWidget(splitter, 1, 0, 1, 1);

        fileNameLabel = new QLabel(dialog);
        fileNameLabel->setObjectName(QString::fromUtf8("fileNameLabel"));
        QSizePolicy sizePolicy2;
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fileNameLabel->sizePolicy().hasHeightForWidth());
        fileNameLabel->setSizePolicy(sizePolicy2);
        fileNameLabel->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(fileNameLabel, 2, 0, 1, 1);

        fileNameEdit = new QFileDialogLineEdit(dialog);
        fileNameEdit->setObjectName(QString::fromUtf8("fileNameEdit"));
        sizePolicy.setHeightForWidth(fileNameEdit->sizePolicy().hasHeightForWidth());
        fileNameEdit->setSizePolicy(sizePolicy);

        gridLayout->addWidget(fileNameEdit, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 0, 0, 2, 1);

        fileTypeLabel = new QLabel(dialog);
        fileTypeLabel->setObjectName(QString::fromUtf8("fileTypeLabel"));
        QSizePolicy sizePolicy3;
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(fileTypeLabel->sizePolicy().hasHeightForWidth());
        fileTypeLabel->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(fileTypeLabel, 3, 0, 1, 1);

        fileTypeCombo = new QComboBox(dialog);
        fileTypeCombo->setObjectName(QString::fromUtf8("fileTypeCombo"));
        sizePolicy3.setHeightForWidth(fileTypeCombo->sizePolicy().hasHeightForWidth());
        fileTypeCombo->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(fileTypeCombo, 3, 0, 1, 1);


        retranslateUi(dialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(dialog);
    } // setupUi

    void retranslateUi(QDialog *dialog)
    {
        lookInLabel->setText(QApplication::translate("QFileDialog", "Look in:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        backButton->setToolTip(QApplication::translate("QFileDialog", "Back", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        backButton->setAccessibleName(QApplication::translate("QFileDialog", "Back", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        backButton->setAccessibleDescription(QApplication::translate("QFileDialog", "Go back", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        forwardButton->setToolTip(QApplication::translate("QFileDialog", "Forward", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        forwardButton->setAccessibleName(QApplication::translate("QFileDialog", "Forward", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        forwardButton->setAccessibleDescription(QApplication::translate("QFileDialog", "Go forward", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        toParentButton->setToolTip(QApplication::translate("QFileDialog", "Parent Directory", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        toParentButton->setAccessibleName(QApplication::translate("QFileDialog", "Parent Directory", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        toParentButton->setAccessibleDescription(QApplication::translate("QFileDialog", "Go to the parent directory", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        newFolderButton->setToolTip(QApplication::translate("QFileDialog", "Create New Folder", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        newFolderButton->setAccessibleName(QApplication::translate("QFileDialog", "Create New Folder", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        newFolderButton->setAccessibleDescription(QApplication::translate("QFileDialog", "Create a New Folder", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        listModeButton->setToolTip(QApplication::translate("QFileDialog", "List View", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        listModeButton->setAccessibleName(QApplication::translate("QFileDialog", "List View", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        listModeButton->setAccessibleDescription(QApplication::translate("QFileDialog", "Change to list view mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        detailModeButton->setToolTip(QApplication::translate("QFileDialog", "Detail View", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        detailModeButton->setAccessibleName(QApplication::translate("QFileDialog", "Detail View", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        detailModeButton->setAccessibleDescription(QApplication::translate("QFileDialog", "Change to detail view mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        fileTypeLabel->setText(QApplication::translate("QFileDialog", "Files of type:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(dialog);
    } // retranslateUi

};

namespace Ui {
    class QFileDialog: public Ui_QFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QFILEDIALOG_H
