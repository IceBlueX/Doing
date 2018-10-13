#ifndef SI_DLG
#define SI_DLG

#include <QDialog>
#include <QString>
#include "ui_dlg.h"

class SI_DlgAction :public QDialog, public Ui::si_dlg
{	
	Q_OBJECT
public:
	SI_DlgAction(QWidget *parent = 0);
	~SI_DlgAction();

private slots :
	void accept() override;

	void on_ok_clicked();

	void on_cancel_clicked();

signals:

	void sendsignal(QString);
};

#endif