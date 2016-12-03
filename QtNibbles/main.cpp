#include "qtnibbles.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtNibbles w;
	w.show();
	return a.exec();
}
