#include <iostream>

#include <cstdlib>

#include <windows.h>



using namespace std;

class base            //��Ϊ����

{
	//------------------��Ա����------------------
public:

	int a;
	static int count;
protected:

	int b;

private:

	int c;

	//------------------��Ա����------------------

public:
	base()
	{
		cout << "base() is build" << endl;
	}

	base(int pub=0, int pro=0, int pri=0)  //�вι���


	{

		
		this->a = pub;
		this->b = pro;
     this->c = pri;
	  cout << "base() is build" << endl;
	}

	~base()//��������

	{
		cout << "base() is delete" << endl;
        
	}
	void print()

	{
		
		cout << "��������Ա����:" << a << " " <<b << " " << c<< endl;

	}
};
class derived1 :public base  //���м̳�

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

	void print1()//̽�����м�

	{

		//�������ݴ���̽��

		//a = 200;//a_pub��Ϊ��������,�����ڿ���ֱ�ӷ���

		//b = 200;//a_pro��Ϊ��������,�����ڿ���ֱ�ӷ���

		//c = 200;//����,����˽�г�Ա�����಻�ɼ�

		//���ຯ������̽��

		base::print();

		//cout << "����������ݳ�Ա: bb = " << bb << endl;
	}



};
  
class derived2 :protected base //�����̳�

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

	void print2()//̽�������̳�

	{

		//�������ݴ���̽��

		//a= 300;//a_pub��Ϊ��������,���ڿ���ֱ�ӷ���

		//b = 300;//a_pro��Ϊ��������,���ڿ���ֱ�ӷ���

		//c = 300;//����,����˽�г�Ա�����಻�ɼ�



		//���ຯ������̽��

		base::print();
			

		
	}

};

class derived3 : private base //˽�м̳�

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
	void print3()//̽��˽�м̳�

	{

		//�������ݴ���̽��

		//a = 400;//a_pub��Ϊ˽������,�����ڿ���ֱ�ӷ���

		//b = 400;//a_pro��Ϊ˽������,�����ڿ���ֱ�ӷ���

		//c = 400;//����,����˽�г�Ա�����಻�ɼ�



		//���ຯ������̽��

		base::print();

		




	}
};

int main()
{
	cout << "����base�Ĵ�СΪ: " << sizeof(base) << endl;

	cout << "--��derived1�Ĵ�СΪ: " << sizeof(derived1) << endl;

	cout << "--��derived2�Ĵ�СΪ: " << sizeof(derived2) << endl;

	cout << "--��derived3�Ĵ�СΪ: " << sizeof(derived3) << endl;
	
	
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

