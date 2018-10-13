#pragma execution_character_set("utf-8")

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include<QDialog>
#include <QTimer>
#include <qdatetime.h>

#include "info.h"
#include "ui_info.h"
#include "si_dlg.h"


Info::Info(QWidget *parent) :
QMainWindow(parent),
ui(new Ui::Info)
{
	ui->setupUi(this);

	/*connect(ui->stop, &QPushButton::clicked, this, &Info::inputDouble);*///������
	/*timesetting = new QAction(tr("aaa"), this);
	ui->menu->addAction(timesetting);*/

	timesetting = ui->menu->addAction(tr("ʱ��������"));
	connect(timesetting, SIGNAL(triggered()), this, SLOT(inputDouble()));//��Ҫ��Info::,���������Ӧ��
	
	
	connect(&dlg, SIGNAL(sendsignal(QString)), this, SLOT(backmain(QString)));//������źŴ���

}

Info::~Info()
{
	delete ui;
}

//д�뱾��TXT������ΪQString���͡�
void Info::writeStream(QString ws){

	std::string ss=ws.toStdString();

	std::ofstream out;
	out.open("F:\\Info.txt", std::ios::app);//ios truncΪ���ǣ�ios appΪ�ĵ�ĩβ׷��
	if (!out.is_open()){
		ui->textBrowser->moveCursor(QTextCursor::End);//��궨λ���ı������
		ui->textBrowser->insertPlainText("open File Failed.");
		return;
	}
	ss += '\n';
	out << ss ;
	
	out.close();
}

//���ж�ȡ����TXT�ļ�������ʾ���ı����С�
void Info::readStream()
{
	std::ifstream in;
	in.open("F:\\Info.txt", std::ios::in);
	if (!in.is_open()){
		ui->textBrowser->moveCursor(QTextCursor::End);
		ui->textBrowser->insertPlainText("open File Failed.");
		return;
	}
	std::string read;

	while (!in.eof())

	{
		getline(in, read);
		read = read + "\n";
		ui->textBrowser->moveCursor(QTextCursor::End);

		ui->textBrowser->insertPlainText(QString(QString::fromStdString(read.c_str())));
	}
	in.close();

}

//�����ʼ���в���TXT���ļ���ʾ���ı�����
void Info::on_start_clicked(){
	QDateTime  qtime = QDateTime::currentDateTime();
	QString cdate = qtime.toString("yyyy.MM.dd hh:mm:ss");

	ui->textBrowser->moveCursor(QTextCursor::End);
	QString tem = "\n" + cdate + "\t" + "��ʼ����:\n";
	ui->textBrowser->insertPlainText(tem);
	readStream();
	writeStream(tem);
	ui->textBrowser->moveCursor(QTextCursor::End);
}

//�����ֹͣ�����ı������������ֱ����ڱ���TXT
void Info::on_stop_clicked()
{
	QDateTime  qtime = QDateTime::currentDateTime();
	QString cdate = qtime.toString("yyyy.MM.dd hh:mm:ss");

	ui->textBrowser->moveCursor(QTextCursor::End);
	QString tem = "\n" + cdate + "\t" + "��ֹͣ! \n";
	ui->textBrowser->insertPlainText(tem);
	writeStream(tem);
	ui->textBrowser->moveCursor(QTextCursor::End);
}

//��ʾ�����ļ���Ϣ
void Info::on_show_clicked()
{
	QDateTime  qtime = QDateTime::currentDateTime();
	QString cdate = qtime.toString("yyyy.MM.dd hh:mm:ss");

	ui->textBrowser->moveCursor(QTextCursor::End);

	QString tem = cdate +"\t"+"QString str\n";		//�������ַ��ɸ���
	
	ui->textBrowser->insertPlainText(tem);
	writeStream(tem);
	ui->textBrowser->moveCursor(QTextCursor::End);
}

//����ʱ����
void Info::inputDouble()
{
	
	if (dlg.exec())
	{

	}
	else
	{

	}
	//bool ok;
	//double price = QInputDialog::getDouble(this, tr("����ʱ����"), tr("���"), 0.0, 0.0, 1000.0, 2, &ok);//��Ϣ�Ի������
	//if (ok) ui->textBrowser->setText(QString::number(price, 'g', 6));
}

//����������
void Info::backmain(QString y)
{
	y = "\n�ѽ�ʱ��������Ϊ��"+y+"\n";
	ui->textBrowser->moveCursor(QTextCursor::End);
	ui->textBrowser->insertPlainText(y);
	ui->textBrowser->moveCursor(QTextCursor::End);
}



