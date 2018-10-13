#ifndef TABTENN0_1301
#define TABTENN0_1301

#include<string>

using std::string;

class TableTennisPlayer
{
private:
	string firstname;
	string lastname;
	bool hasTable;
public:
	TableTennisPlayer(const string &fn = "none", const string &ln = "none", bool ht = false);
	void Name() const;
	bool HasTable() const { return hasTable; };
	void ResetTable(bool v){ hasTable = v; };
};

class RatedPlayer : public TableTennisPlayer
{
private:
	unsigned int rating;
public:
	RatedPlayer(unsigned int r = 0, const string &fn = "none", const string &ln = "none", bool ht = false);
	RatedPlayer(unsigned int r,const TableTennisPlayer &tp);//默认实参须在形参列表的末尾
	unsigned int Rating()const{ return rating; };
	void ResetRating(unsigned int r){ rating = r; };

};
#endif