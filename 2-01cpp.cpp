#include <stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;
int main()

{
	char c;                            	/*定义变量c、a、f */

	int a;

	double f;

	cin>> c >> a >> f;            	/*输入变量c、a、f的值*/

	a = a + c;

	f = f + 2 * a;
	cout << "a=" << a;
	cout << "c=" << c;
		
		cout<<setiosflags(ios::fixed)<<setprecision(1)<<"f="<< f<<endl;      	/*输出变量c、a、f的值*/
	system("pause");
	return 0;

}