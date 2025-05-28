#include<iostream>
#include<string>
using namespace std;
class tabletennisPlay
{
public:
	tabletennisPlay();
	~tabletennisPlay();
	tabletennisPlay(const string& fn = "none", const string& ln = "none", bool ht = false);
	void Name()const;
	bool HasTable()const {
		return hasTable;
	}
	void resertTable(bool v)
	{
		hasTable = v;
	}
private:
	string firstname;
	string lastname;
	bool hasTable;
};
class Rated :public tabletennisPlay
{
	unsigned int rating;
public:
	Rated(unsigned int r = 0, const string& fn = "none", const string& ln = "none", bool ht = false);
	Rated(unsigned int r = 0,const tabletennisPlay &tp);
	unsigned int rating()const
	{
		return rating;
	}
	void ResetRating(unsigned int r)
	{
		rating =r;
	}
};
tabletennisPlay::tabletennisPlay()
{
}

tabletennisPlay::~tabletennisPlay()
{
}

tabletennisPlay::tabletennisPlay(const string& fn, const string& ln, bool ht) :firstname(fn),lastname(ln),hasTable(ht)
{

}

void tabletennisPlay::Name() const
{
	cout << lastname << "," << firstname << endl;
}
int main()
{
	tabletennisPlay player1("Chuck", "Blizzard", true);
	tabletennisPlay player2("Tara", "Boomdeae", false);
	player1.Name();
	if (player1.HasTable())
	{
		cout << ": has a table.\n";
	}
	else
		cout << ": hasn't a table.\n";
	return 0;
}
