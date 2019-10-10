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
		cout << "请输入学生姓名C:\n";
		cin >> name;
		cout << "请输入年龄:\n";
		cin >> age;
		cout << "请输入五级制C++语言考试分数:\n";
		cin >> score;
		s = 20 * score;
		try
		{
			cout <<"学生姓名为:\n"<<name<<endl ;
			cout << "年龄为:\n" << cheakAge(age);
			cout << "成绩为:\n"<<cheakscore (score);

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
	
