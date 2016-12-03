#ifndef QTNIBBLES_H
#define QTNIBBLES_H

#include <QtWidgets/QMainWindow>
#include "ui_qtnibbles.h"

class QtNibbles : public QMainWindow
{
	Q_OBJECT

public:
	QtNibbles(QWidget *parent = 0);
	~QtNibbles();

private:
	Ui::QtNibblesClass ui;
};

#endif // QTNIBBLES_H
