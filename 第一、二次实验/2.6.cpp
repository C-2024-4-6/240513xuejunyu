#include<iostream>
#include<cmath>
using namespace std;
int rubia(int a, int b);
int main()
{
	int a, b, x, y;
	cout << "输入两个正整数a和b" << endl;
	cin >> a >> b;
	x = rubia(a, b);
	y = a * b / x;
	cout << "a和b的最大公约数为" << x << endl;
	cout << "a和b的最小公倍数为" << y << endl;
	return 0;
}

int rubia(int a, int b)
{
	int sunday;
	if (a < b)
	{
		sunday = a;
		a = b;
		b = sunday;
	}
	while (b != 0)
	{
		sunday = a % b;
		a = b;
		b = sunday;
	}
	return a;
}