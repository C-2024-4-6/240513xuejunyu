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
	cout << "������Ȼ��m��n" << endl;
	cin >> a >> b;
	x = rubia(a, b);
	y = a * b / x;
	cout << "���Լ��Ϊ" << x << endl;
	cout << "��С������Ϊ" << y << endl;

	return 0;
}