#include "info.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Info w;
	w.show();
	return a.exec();
}
