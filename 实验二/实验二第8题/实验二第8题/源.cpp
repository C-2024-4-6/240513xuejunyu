#include<iostream>
using namespace std;
int main()
{
	double a, x, y, z;
	cout << "����a��ֵ" << endl;
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
		cout << "ƽ����Ϊ" << y << endl;
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
		cout << "ƽ����Ϊ" << y << "i" << endl;
	}
	else cout << "ƽ����Ϊ" << 0 << endl;
	return 0;
}