#include<iostream>
using namespace std;
int main()
{
	float x, y;
	cout << "����һ������0С��10��x" << endl;
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
		cout << "x���ڶ������ڣ��޷�����" << endl;
	}
		return 0;
}