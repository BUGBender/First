#pragma once

#include <QtWidgets/QWidget>
#include "ui_WallClockDlg.h"

class CWallClockDlg : public QWidget
{
    Q_OBJECT

public:
    CWallClockDlg(QWidget *parent = Q_NULLPTR);

private:
    Ui::CWallClockDlgClass ui;
};
