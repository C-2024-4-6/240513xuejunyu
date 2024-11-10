#include<iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "输入一个大于0小于10的x" << endl;
	cin >> x;
	if (x > 0 && x < 10) {
		if (x < 1) {
			y = 3 - 2 * x;
			cout << y << endl;
		}
		else if (x < 5) {
			y = 1 + 2 / (4 * x);
			cout << y << endl;
		}
		else {
			y = x * x;
			cout << y << endl;
		}
	}
	else {
		cout << "x不在定义域内，无法计算" << endl;
	}
		return 0;
}