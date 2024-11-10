#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float x, y;
	cout << "输入一个华氏温度" << endl;
	cin >> x;
	y = (x - 32) / 1.8;
	cout << fixed << setprecision(2);
	cout << "换算为摄氏温度为" << y << endl;
	return 0;
}
