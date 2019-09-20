#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	int y, m, d, sum, leap, i, k; char e;
	cout << "please enter the date of the day" << endl;
	cin >> y >> e >> m >> e >> d;
	switch (m)
	{
	case 1:sum = 0; break;
	case 2:sum = 31; break;
	case 3:sum = 59; break;
	case 4:sum = 90; break;
	case 5:sum = 120; break;
	case 6:sum = 151; break;
	case 7:sum = 181; break;
	case 8:sum = 212; break;
	case 9:sum = 243; break;
	case 10:sum = 273; break;
	case 11:sum = 304; break;
	case 12:sum = 334; break;
	default: sum != m; break;
	}
	sum = sum + d;
	if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
		leap = 1;
	else
		leap = 0;
	if (leap == 1 && m > 2)
		sum++;
	cout << "这是该年的第" << sum << "天" << endl;
	i = sum % 7;
	k = 1 + (sum - i) / 7;
	cout << "这是该年的第" << k << "周" << endl;
	system("pause");
	return 0;
}