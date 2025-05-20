#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

class Date
{
public:
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1;
	d1.Init(2025, 5, 16);

	Date d2;
	d2.Init(2025, 5, 17);

	d1.print();
	d2.print();
}