#include<iostream>
#include"tabtenn0_1301.h"

TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, bool ht) :firstname(fn), lastname(ln), hasTable(ht){} //�������캯��������ʼ������������

void TableTennisPlayer::Name() const
{
	std::cout << lastname << ", " << firstname;
}

