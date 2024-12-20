#include<iostream>
using namespace std;
int main()
{
	double a, x, y, z;
	cout << "输入a的值" << endl;
	cin >> a;
	if (a > 0)
	{
		x = a;
		y = (x + a / x) / 2;
		while (fabs(y - x) >= 0.00001)
		{
			x = y;
			y = (x + a / x) / 2;
		}
		cout << "平方根为" << y << endl;
	}
	else if (a < 0)
	{
		z = -a;
		x = z;
		y = (x + z / x) / 2;
		while (fabs(y - x) >= 0.00001)
		{
			x = y;
			y = (x + z / x) / 2;
		}
		cout << "平方根为" << y << "i" << endl;
	}
	else cout << "平方根为" << 0 << endl;
	return 0;
}