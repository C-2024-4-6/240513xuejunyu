#include<iostream>
using namespace std;
int main()
{
	double a, b, x;
	char m;
	cout << "��������a���������b" << endl;
	cin >> a >> m >> b;
	switch (m)
	{
	case '+':
		x = a + b;
		cout << "=" << x << endl;
		break;
	case '-':
		x = a - b;
		cout << "=" << x << endl;
		break;
	case '*':
		x = a * b;
		cout << "=" << x << endl;
		break;
	case '/':
		if (b != 0)
			x = a / b;
		else cout << "��������Ϊ0" << endl;
		break;
		cout << "=" << x << endl;
		break;
	case '%':
		x = (int)a % (int)b;
		cout << "=" << x << endl;
		break;
	}
	return 0;
}