#include "qtnibbles.h"

QtNibbles::QtNibbles(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(exit()));
}

QtNibbles::~QtNibbles()
{

}

void QtNibbles::exit() {
	QApplication::exit();
}
