#include<iostream>
using namespace std;
class date
{
public:
	int year, month, day;
	date(int y, int m, int d);
	date();
	void display();
};
date::date(int y,int m,int d)
{
	year = y;
	month = m;
	day = d;
}
void date::display()
{
	cout << year << "_" << month << "_" << day << endl;
 }
int main()
	{
	date day3();
	cout << "day3 is:";
	day3.display();
	system("pause");
	return 0;
	}
