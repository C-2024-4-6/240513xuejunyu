#include<iostream>
#include<cmath>
using namespace std;
int rubia(int a, int b);
int main()
{
	int a, b, x, y;
	cout << "��������������a��b" << endl;
	cin >> a >> b;
	x = rubia(a, b);
	y = a * b / x;
	cout << "a��b�����Լ��Ϊ" << x << endl;
	cout << "a��b����С������Ϊ" << y << endl;
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