#include<iostream>
#include"tabtenn0_1301.h"

TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, bool ht) :firstname(fn), lastname(ln), hasTable(ht){} //声明构造函数，并初始化三个变量。

void TableTennisPlayer::Name() const
{
	std::cout << lastname << ", " << firstname;
}

