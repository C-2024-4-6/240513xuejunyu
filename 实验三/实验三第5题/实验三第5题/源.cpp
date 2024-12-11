/*递归 猴子摘桃子问题*/
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
	cout << "第一天猴子共摘" << eat(n) << "个桃子" << endl;

	return 0;
}