#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a, b, c, i, k, s;
	cout << "please enter a,b,c:" << endl;
	cin >> a >> b >> c;
	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		k = 1.0 / 2.0 * (a + b + c);
		s = sqrt(k*(k - a)*(k - b)*(k - c));
		cout << "三角形的面积是：" << "s=" << s << endl;

	}

	else
	{
		cout << "这三条边无法构成三角形" << endl;

	}
	system("pause");
	return 0;
	
}