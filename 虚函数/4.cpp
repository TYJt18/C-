#include<iostream>
using namespace std;
class shapes
{private:
	int a;
public:
	virtual int display() const=0;
};

class Rectangle :public shapes
{
private:
	int height;
public:
	int display()const;
	 Rectangle(int m ) :height(m)
	 {

	 }
};
class Circle:public shapes
{
private:
	int radius;
public:
  int	display()const;
   Circle(int e) :radius(e)
   {

	}
};
   int Rectangle::display()const
{
		cout << "Rectangle::display is called";
		return  height;
}
	int Circle::display()const
	{
		cout << "Circle::display is called";
		return radius;
	}
	int shapes::display()const
	{
		cout << "shapes::display is called";
		return a;
	}
	int main()
	{
		shapes *ptr[2];
		ptr[0] = new Circle(3);
		
		ptr[1] = new Rectangle(2);
		
		cout << " Circle::display is:"<<  "     " << ptr[0]->display() << endl;
		cout << " Rectangle::display is:"<<  "     " << ptr[1]->display() << endl;
		system("pause");
		return 0;
	}