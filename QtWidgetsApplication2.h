#pragma once

#include <QtWidgets/QWidget>
#include "ui_QtWidgetsApplication2.h"

class QtWidgetsApplication2 : public QWidget
{
    Q_OBJECT

public:
    QtWidgetsApplication2(QWidget *parent = nullptr);
    ~QtWidgetsApplication2();

private:
    Ui::QtWidgetsApplication2Class ui;
};
