#include<iostream>
using namespace std;
int main()
{
	float a, b, c, x;
	cout << "���������ε������߳�" << endl;
	cin >> a >> b >> c;
	if (a < (b + c) && b < (a + c) && c < (a + b))
	{
		if (a < 0 || b < 0 || c < 0)
		{
			cout << "�޷�����������" << endl;
		}
		else if(a==b||a==c||b==c)
		{
			x = a + b + c;
			cout << "�������ε��ܳ�Ϊ" << x << endl;
			cout << "���Ҵ�������Ϊ����������" << endl;
		}
		else
		{
			x = a + b + c;
			cout << "�������ε��ܳ�Ϊ" << x << endl;
		}
	}
	else
	{
		cout << "�޷�����������" << endl;
	}

	return 0;
}