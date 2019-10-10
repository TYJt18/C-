#include<iostream>
#include<stdio.h>
using namespace std;
int  *p = new int[20];
int main()
{
	int num = 0; int positive = 0;
	int negative = 0;
	cin >> num;
	if (num < 1 || num>20)
	{
		cout << "number error.\n";

	}
	else
	{
		int i;
		for (i = 0; i < num; i++)
		{
			cin >> p[i];

		}

		for (i = 0; i < num; i++)
		{
			if (p[i] > 0)
				positive++;
			else if (p[i] < 0)
				negative++;
		}
		cout << "There are" << num << "figures,\n";
		cout << positive << "of them are positive numbers,\n";
		cout << negative << "of them are negative numbers,\n";
	}
	delete[]p;
	system("pause");
	return 0;
}




















			
	