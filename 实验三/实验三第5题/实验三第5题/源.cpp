/*�ݹ� ����ժ��������*/
#include<iostream>
using namespace std;

int eat(int n)
{
	int t;
	if (n == 1)
		t = 1;
	else
		t = (eat(n - 1) + 1) * 2;
	return (t);
}

int main()
{
	int n = 10;
	cout << "��һ����ӹ�ժ" << eat(n) << "������" << endl;

	return 0;
}