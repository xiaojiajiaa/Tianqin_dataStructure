#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Tianqin_dataStructure.h"

class Tianqin_dataStructure : public QMainWindow
{
	Q_OBJECT

public:
	Tianqin_dataStructure(QWidget *parent = Q_NULLPTR);

private:
	Ui::Tianqin_dataStructureClass ui;
};
