//--
// This file is part of Sonic Pi: http://sonic-pi.net
// Full project source: https://github.com/sonic-pi-net/sonic-pi
// License: https://github.com/sonic-pi-net/sonic-pi/blob/main/LICENSE.md
//
// Copyright 2021 by Sam Aaron (http://sam.aaron.name).
// All rights reserved.
//
// Permission is granted for use, copying, modification, and
// distribution of modified versions of this work as long as this
// notice is included.
//++


#ifndef PHXWIDGET_H
#define PHXWIDGET_H
#include <QWidget>
#include "phxwebview.h"

class QVBoxLayout;
class QHBoxLayout;
class QLabel;
class QPushButton;
class PhxWebView;

class PhxWidget : public QWidget
{
    Q_OBJECT
public:
    PhxWidget(QWidget* parent = 0);
    void load(QUrl url);

private:
    QVBoxLayout *mainLayout;
    QHBoxLayout *topRowSubLayout;
    QPushButton *sizeDownButton;
    QPushButton *sizeUpButton;
    QPushButton *openExternalBrowserButton;
    PhxWebView *phxView;

private slots:
    void handleSizeDown();
    void handleOpenExternalBrowser();
    void handleSizeUp();

};

#endif // PHXWIDGET_H
