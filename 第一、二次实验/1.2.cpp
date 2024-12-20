#include<iostream>
using namespace std;
int main()
{
	float r, l, x;
	float m = 3.14;
	cout << "输入圆锥底的半径和锥高" << endl;
	cin >> r >> l;
	x = m * r * r * l / 3;
	cout << "圆锥的体积为" << x << endl;
	return 0;
}
