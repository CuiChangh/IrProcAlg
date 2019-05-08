#include "irprocalg.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	IrProcAlg w;
	w.show();
	return a.exec();
}
