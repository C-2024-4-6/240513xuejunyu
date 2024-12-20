#include<iostream>
#include<math.h>
using namespace std;
#include<C:\Users\xuejy\Desktop\test\实验三\实验三第4题\实验三第4题\mytriangle.h>

class Mytriangle {
private:
	double a, b, c, s, x;
public:
	bool is_valid(double side1, double side2, double side3)
	{
		a = side1; b = side2; c = side3;
		if (a > 0 && b > 0 && c > 0)
		{
			if (a < (b + c) && b < (a + c) && c < (a + b))
				cout << "输入合法" << endl;
			else cout << "输入不合法" << endl;
		}
		else cout << "输入不合法" << endl;
		return "0";
	}
	double _area(double side1, double side2, double side3)
	{
		a = side1; b = side2; c = side3;
		s = (a + b + c) / 2;
		x = s*(s - a)*(s - b)*(s - c);
		cout <<"三角形面积为" << sqrt(x) << endl;
		return 0;
	}
};

int main()
{
	double side1, side2, side3;
	cout << "输入三角形的三个边长" << endl;
	cin >> side1 >> side2 >> side3;
	Mytriangle mytriangle;
	mytriangle.is_valid(side1, side2, side3);
	mytriangle._area(side1, side2, side3);

	return 0;
}
