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
	Date(int, int , int);                   		//���캯��ԭ������

	void Display();

};

Date::Date(int y, int m, int d)               		//��������ʵ�ֹ��캯������ǰ�����������

{
	cout << "Executing constructor��\n";  	//�˾�Ϊ�����������������䣬��������

//���캯����ϵͳ�Զ�����

	year = y;                                    //��ɶ����ݳ�Ա�ĳ�ʼ��

	month = m;

	day = d;

}

void Date::Display()

{
	cout << year << "-" << month << "-" << day << endl;

}

int main()

{
	
	Date today;              		//�������ͬʱ��ɶ���ĳ�ʼ��
	
	cout << "Today is:";

	today.Display();
	today = Date(2011, 7, 24);
	cout << "today is:";
	today.Display();
	system("pause");
	return 0;

}