#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float x, y;
	cout << "����һ�������¶�" << endl;
	cin >> x;
	y = (x - 32) / 1.8;
	cout << fixed << setprecision(2);
	cout << "����Ϊ�����¶�Ϊ" << y << endl;
	return 0;
}
