#include<iostream>
#include"tabtenn0_1301.h"

using std::cout;

int main()
{
	TableTennisPlayer player1("CHuck","Blizzard",true);
	TableTennisPlayer player2("Tara", "Boomdea", false);

	player1.Name();
	if (player1.HasTable())
		cout << ": has a table.\n";
	else
		cout << ": hasn`t a table.\n";

	player2.Name();
	if (player2.HasTable())
		cout << ": has a table.\n";
	else
		cout << ": hasn`t a table.\n";

	system("pause");
	return 0;

};