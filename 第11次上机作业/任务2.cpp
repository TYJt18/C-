#include <iostream>

#include <cstdlib>

#include <windows.h>



using namespace std;

class base            //作为基类

{
	//------------------成员数据------------------
public:

	int a;
	static int count;
protected:

	int b;

private:

	int c;

	//------------------成员函数------------------

public:
	base()
	{
		cout << "base() is build" << endl;
	}

	base(int pub=0, int pro=0, int pri=0)  //有参构造


	{

		
		this->a = pub;
		this->b = pro;
     this->c = pri;
	  cout << "base() is build" << endl;
	}

	~base()//析构函数

	{
		cout << "base() is delete" << endl;
        
	}
	void print()

	{
		
		cout << "基类对象成员数据:" << a << " " <<b << " " << c<< endl;

	}
};
class derived1 :public base  //公有继承

{

private:

	//base bb;
	
public:
	derived1() :base(3, 2, 2)
	{
		cout << "derived1() is build" << endl;
	}

	//derived1(int b ) :base(3, 2, 2),bb(0)

	//{
		//cout << "derived1() is build" << endl;
		

	//}

	~derived1()

	{
		a=0;
		cout << "a=" << a;
		cout << "derived1() is delete" << endl;

		
	}

	void print1()//探索公有继

	{

		//基类数据传承探索

		//a = 200;//a_pub仍为公有数据,子类内可以直接访问

		//b = 200;//a_pro仍为保护数据,子类内可以直接访问

		//c = 200;//报错,基类私有成员在子类不可见

		//基类函数传承探索

		base::print();

		//cout << "自身添加数据成员: bb = " << bb << endl;
	}



};
  
class derived2 :protected base //保护继承

{
private:

	
public:
	
	derived2(int c ):base (3, 3, 3)

	{

		cout << "derived2() is build" << endl;



		
	}

	~derived2()

	{
		a=1;
		cout << "a=" << a;
		cout << "derived2() is  delete" << endl;

	
	}

	void print2()//探索保护继承

	{

		//基类数据传承探索

		//a= 300;//a_pub变为保护数据,类内可以直接访问

		//b = 300;//a_pro变为保护数据,类内可以直接访问

		//c = 300;//报错,基类私有成员在子类不可见



		//基类函数传承探索

		base::print();
			

		
	}

};

class derived3 : private base //私有继承

{

private:

	
public:
	

	derived3 (int d = 4) : base(4, 4, 4)

	{

		cout << "derived3() is build" << endl;



	}



	~derived3()

	{
		a=3;
		cout << "a=" << a;
		cout << "derived3() is delete" << endl;

		


	}
	void print3()//探索私有继承

	{

		//基类数据传承探索

		//a = 400;//a_pub变为私有数据,子类内可以直接访问

		//b = 400;//a_pro变为私有数据,子类内可以直接访问

		//c = 400;//报错,基类私有成员在子类不可见



		//基类函数传承探索

		base::print();

		




	}
};

int main()
{
	cout << "基类base的大小为: " << sizeof(base) << endl;

	cout << "--类derived1的大小为: " << sizeof(derived1) << endl;

	cout << "--类derived2的大小为: " << sizeof(derived2) << endl;

	cout << "--类derived3的大小为: " << sizeof(derived3) << endl;
	
	
	cout << "---------------------------------" << endl;
	
	
	cout << "---------------------------------" << endl;
	derived1 m;

	m.print();
	m.print1();
	cout << "---------------------------------" << endl;

	derived2 q(0);
	q.print2();
	cout << "---------------------------------" << endl;

	derived3 p;
	p.print3();

	cout << "---------------" << endl;
	


system("pause");



	return 0;




}

