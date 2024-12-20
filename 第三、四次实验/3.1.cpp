#include<iostream>
using namespace std;

int rubia(int a, int b)
{
	int c;
	if (a < b)
	{
		c = a;
		a = b;
		b = c;
	}
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main()
{
	int a, b, x, y;
	cout << "输入自然数m和n" << endl;
	cin >> a >> b;
	x = rubia(a, b);
	y = a * b / x;
	cout << "最大公约数为" << x << endl;
	cout << "最小公倍数为" << y << endl;

	return 0;
}