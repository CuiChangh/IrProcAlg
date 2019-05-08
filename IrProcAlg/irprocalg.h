#ifndef IRPROCALG_H
#define IRPROCALG_H

#include <QtWidgets/QMainWindow>
#include "ui_irprocalg.h"

class IrProcAlg : public QMainWindow
{
	Q_OBJECT

public:
	IrProcAlg(QWidget *parent = 0);
	~IrProcAlg();

private:
	Ui::IrProcAlgClass ui;
};

#endif // IRPROCALG_H
