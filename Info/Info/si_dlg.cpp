#include "si_dlg.h"
#include "ui_dlg.h"


SI_DlgAction::SI_DlgAction(QWidget *parent)
	: QDialog(parent)
{
	setupUi(this);
	
}


SI_DlgAction::~SI_DlgAction()
{

}

void SI_DlgAction::accept()
{
	
}

void SI_DlgAction::on_ok_clicked()
{
	emit sendsignal(timein->text());
	close();
}

void SI_DlgAction::on_cancel_clicked()
{
	close();
}

