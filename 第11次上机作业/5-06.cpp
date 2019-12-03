#include <iostream>

using namespace std;



class Member

{



public:

	Member()

	{

		cout << "constructing Member\n";

	}

	~Member()

	{

		cout << "destructing Member\n";

	}

};



class Base

{
	
public:
	//Member mem;
	Base()

	{

		cout << "constructing Base\n";

	}

	~Base()

	{

		cout << "destructing Base\n";

	}

};



class Derived : public Base                         //�̳�

{

private:

	Member mem;                              //�����Ա

public:

	Derived()

	{

		cout << "constructing Derived\n";

	}

	~Derived()

	{

		cout << "destructing Derived\n";

	}

};



int main()

{

	Derived obj;
	
	return 0;

}