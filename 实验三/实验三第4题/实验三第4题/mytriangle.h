#pragma once
#include<iostream>
#include<math.h>
using namespace std;

double a, b, c, s, x;
bool is_valid(double side1, double side2, double side3)
{
	a = side1; b = side2; c = side3;
	if (a > 0 && b > 0 && c > 0)
	{
		if (a < (b + c) && b < (a + c) && c < (a + b))
			cout << "����Ϸ�" << endl;
		else cout << "���벻�Ϸ�" << endl;
	}
	else cout << "���벻�Ϸ�" << endl;
	return "0";
}
double _area(double side1, double side2, double side3)
{
	a = side1; b = side2; c = side3;
		s = (a + b + c) / 2;
		x = s*(s - a)*(s - b)*(s - c);
		cout << "���������Ϊ" << sqrt(x) << endl;
		return 0;
}