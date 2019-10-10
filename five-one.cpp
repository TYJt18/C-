#include<iostream>
#include<stdio.h>
using namespace std;
int add(int a, int b);
int main()
{
	int x, y, sum;
	cout << "please input x and y:\n" << endl;
	cin >> x >> y;
	sum = add(x, y);
	cout << "sum=" << sum << endl;
	system("pause");
	return 0;
}
 int add(int a, int b)
{
	
	return a+b;
}


