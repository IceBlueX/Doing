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

	/*connect(ui->stop, &QPushButton::clicked, this, &Info::inputDouble);*///键连接
	/*timesetting = new QAction(tr("aaa"), this);
	ui->menu->addAction(timesetting);*/

	timesetting = ui->menu->addAction(tr("时间间隔配置"));
	connect(timesetting, SIGNAL(triggered()), this, SLOT(inputDouble()));//不要加Info::,程序会无响应。
	
	
	connect(&dlg, SIGNAL(sendsignal(QString)), this, SLOT(backmain(QString)));//窗体间信号传递

}

Info::~Info()
{
	delete ui;
}

//写入本地TXT，参数为QString类型。
void Info::writeStream(QString ws){

	std::string ss=ws.toStdString();

	std::ofstream out;
	out.open("F:\\Info.txt", std::ios::app);//ios trunc为覆盖，ios app为文档末尾追加
	if (!out.is_open()){
		ui->textBrowser->moveCursor(QTextCursor::End);//光标定位到文本框最后
		ui->textBrowser->insertPlainText("open File Failed.");
		return;
	}
	ss += '\n';
	out << ss ;
	
	out.close();
}

//逐行读取本地TXT文件，并显示在文本框中。
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

//输出开始运行并将TXT中文件显示在文本框中
void Info::on_start_clicked(){
	QDateTime  qtime = QDateTime::currentDateTime();
	QString cdate = qtime.toString("yyyy.MM.dd hh:mm:ss");

	ui->textBrowser->moveCursor(QTextCursor::End);
	QString tem = "\n" + cdate + "\t" + "开始运行:\n";
	ui->textBrowser->insertPlainText(tem);
	readStream();
	writeStream(tem);
	ui->textBrowser->moveCursor(QTextCursor::End);
}

//输出已停止并将文本框中新增文字保存在本地TXT
void Info::on_stop_clicked()
{
	QDateTime  qtime = QDateTime::currentDateTime();
	QString cdate = qtime.toString("yyyy.MM.dd hh:mm:ss");

	ui->textBrowser->moveCursor(QTextCursor::End);
	QString tem = "\n" + cdate + "\t" + "已停止! \n";
	ui->textBrowser->insertPlainText(tem);
	writeStream(tem);
	ui->textBrowser->moveCursor(QTextCursor::End);
}

//显示本地文件信息
void Info::on_show_clicked()
{
	QDateTime  qtime = QDateTime::currentDateTime();
	QString cdate = qtime.toString("yyyy.MM.dd hh:mm:ss");

	ui->textBrowser->moveCursor(QTextCursor::End);

	QString tem = cdate +"\t"+"QString str\n";		//括号中字符可更改
	
	ui->textBrowser->insertPlainText(tem);
	writeStream(tem);
	ui->textBrowser->moveCursor(QTextCursor::End);
}

//输入时间间隔
void Info::inputDouble()
{
	
	if (dlg.exec())
	{

	}
	else
	{

	}
	//bool ok;
	//double price = QInputDialog::getDouble(this, tr("输入时间间隔"), tr("间隔"), 0.0, 0.0, 1000.0, 2, &ok);//消息对话框调用
	//if (ok) ui->textBrowser->setText(QString::number(price, 'g', 6));
}

//返回主窗口
void Info::backmain(QString y)
{
	y = "\n已将时间间隔设置为："+y+"\n";
	ui->textBrowser->moveCursor(QTextCursor::End);
	ui->textBrowser->insertPlainText(y);
	ui->textBrowser->moveCursor(QTextCursor::End);
}



