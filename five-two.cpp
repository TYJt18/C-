#include<iostream>
#include<stdio.h>
using namespace std;
double  circ(double a ,double p);
double area(double a,double p);
int main()
{
	double r, c,s; 
	double p = 3.14;
	cout << "please input r :\n" << endl;
	cin >> r  ;
	c = circ(r,p); s = area(r,p);
	cout << "c=" << c << endl;
	cout << "s=" << s << endl;
	system("pause");
	return 0;
}
double circ(double a,double p)
{

	return 2*p*a;
}

double area(double a,double p)
{
	return p*a*a;
}