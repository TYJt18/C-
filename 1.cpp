#include<iostream>

using namespace std;

class Date

{
private:

	int year, month, day;

public:
	Date()
	{
		year = 2006;
		month = 10;
		day = 17;
	}
	Date(int, int , int);                   		//构造函数原型声明

	void Display();

};

Date::Date(int y, int m, int d)               		//在类体外实现构造函数，故前面加类名：：

{
	cout << "Executing constructor…\n";  	//此句为编者有意加入的输出语句，用来体现

//构造函数由系统自动调用

	year = y;                                    //完成对数据成员的初始化

	month = m;

	day = d;

}

void Date::Display()

{
	cout << year << "-" << month << "-" << day << endl;

}

int main()

{
	
	Date today;              		//定义对象同时完成对象的初始化
	
	cout << "Today is:";

	today.Display();
	today = Date(2011, 7, 24);
	cout << "today is:";
	today.Display();
	system("pause");
	return 0;

}