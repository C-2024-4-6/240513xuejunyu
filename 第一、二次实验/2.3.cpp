#include<iostream>
using namespace std;
int main()
{
	float a, b, c, x;
	cout << "输入三角形的三个边长" << endl;
	cin >> a >> b >> c;
	if (a < (b + c) && b < (a + c) && c < (a + b))
	{
		if (a < 0 || b < 0 || c < 0)
		{
			cout << "无法构成三角形" << endl;
		}
		else if(a==b||a==c||b==c)
		{
			x = a + b + c;
			cout << "此三角形的周长为" << x << endl;
			cout << "并且此三角形为等腰三角形" << endl;
		}
		else
		{
			x = a + b + c;
			cout << "此三角形的周长为" << x << endl;
		}
	}
	else
	{
		cout << "无法构成三角形" << endl;
	}

	return 0;
}