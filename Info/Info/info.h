#ifndef INFO_H
#define INFO_H

#include <QtWidgets/QMainWindow>
#include<QString>
#include "si_dlg.h"

namespace Ui {
	class Info;
}

class Info : public QMainWindow
{
	Q_OBJECT
public:
	explicit Info(QWidget *parent = 0);
	~Info();

	void writeStream(QString ws);
	void readStream();

private slots:

	void inputDouble();

	void on_start_clicked();

	void on_stop_clicked();

	void on_show_clicked();

	void backmain(QString);

signals:

	void sendsignal(QString);

private:
	Ui::Info *ui;
	QAction *timesetting;
	SI_DlgAction dlg;

};

#endif // INFO_H
