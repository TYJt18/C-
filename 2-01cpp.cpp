#include <stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;
int main()

{
	char c;                            	/*�������c��a��f */

	int a;

	double f;

	cin>> c >> a >> f;            	/*�������c��a��f��ֵ*/

	a = a + c;

	f = f + 2 * a;
	cout << "a=" << a;
	cout << "c=" << c;
		
		cout<<setiosflags(ios::fixed)<<setprecision(1)<<"f="<< f<<endl;      	/*�������c��a��f��ֵ*/
	system("pause");
	return 0;

}