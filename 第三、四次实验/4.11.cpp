#include<iostream>
using namespace std;
int main()
{
	const int maxnum = 10;
	int a[maxnum];
	cout << "Enter ten numbers:" << endl;
	for (int i = 0; i < maxnum; i++)
	{
		cin >> a[i];
	}
	cout << a[0] << " ";
	for (int m = 1; m < maxnum; m++)
	{
		for (int n = 0; n < m; n++)
		{
			if (a[m] != a[n])
			{
				if (n == (m - 1))
					cout << a[m] << " ";
				else
					continue;
			}
			else
				break;
		}
		
	}

	cout << endl;

	return 0;
}