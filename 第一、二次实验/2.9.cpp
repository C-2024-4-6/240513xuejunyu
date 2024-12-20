#include<iostream>
using namespace std;
int main()
{
	double unit = 0.8;
	double a, x;
	double d = 0;
	double sum = 0;
	a = 2;
	while (a < 100)
	{
		++d;
		sum = sum + a;
		a = a * 2;
	} 
	x = unit * sum / d;
	cout << "每天平均花费" << x << "元" << endl;

	return 0;
}