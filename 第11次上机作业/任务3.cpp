#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;
class Location           //作为基类
{
	int a;
public:

	int x;
	int y;

	Location(int xi , int yi ):a()  //有参构造

	{

		cout << "Location() is called" << endl;
		this->x = xi;
		this->y = yi;
	}

	~Location()//析构函数
	{
		cout << "Location() is delete";
	}



	double move(int x2,int y2)
	{
		this->x = x + x2;
		this->y = y + y2;
		cout << "x2=" << x << "\n";
		cout << "y2=" << y << "\n";
		return 0;
	}
};
class Point :public Location 

{

	double bb;
	


public:

	Point(int q,int p):Location(2,2)

	{

	}

	~Point()

	{

	}

	double move(int x3,int y3)
	{
		this->x = x3;
		this->y = y3;
		cout << "x3=" << x << "\n";
		cout << "y3=" << y << "\n";
		return 0;
	}
	double draw()
	{
		cout << "draw1" << endl;
	}

};
class Circle :public Point

{
	double cc;
public:

	
	Circle(int m):cc(2),Point(1,1)
	{

	}
	~Circle()

	{

	}

	double move(int x4, int y4)
	{
		this->x = x4;
		this->y = y4;
		cout << "x4=" << x << "\n";
		cout << "y4=" << y << "\n";
		return 0;
	}
	double draw()
	{
		cout << "draw2" << endl;
	}

};
int main()
{
	Location bb(20, 20);
	Circle  cc( 2);
	
	bb.move(12,3);
	cc.move(3, 2);
	system("pause");
	return 0;

}