#include<iostream>
#include<stdio.h>
using namespace std;
char name[20]; int age, score; int s;
float cheakAge(int a); 
float cheakAge(int n )
{
	if (n< 16 || n>25) 
		throw n;
	return n;
	
}
float cheakscore(float b);
float cheakscore(float m)
{
	if (m< 0 || m>5)
		throw m;
	return s;

}
int main()

	{
		cout << "������ѧ������C:\n";
		cin >> name;
		cout << "����������:\n";
		cin >> age;
		cout << "�������弶��C++���Կ��Է���:\n";
		cin >> score;
		s = 20 * score;
		try
		{
			cout <<"ѧ������Ϊ:\n"<<name<<endl ;
			cout << "����Ϊ:\n" << cheakAge(age);
			cout << "�ɼ�Ϊ:\n"<<cheakscore (score);

		}
		catch (int)
		{
			cout << "the age is error" << endl;

		}
		catch (float)
		{
			cout << "the score is error" << endl;

		}
		cout << "calculate finished " << endl;
		system("pause");
		return 0;
	}
	
