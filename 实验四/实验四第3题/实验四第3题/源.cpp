#include<iostream>
using namespace std;

int change(int s)
{
	if (s)
		return 0;
	else
		return 1;
}

int main()
{
	bool locker[101] = { 0 };
	for (int n = 1; n < 101; n++)
	{
		for (int y = n; y < 101; y = y + n)
		{
			locker[y] = change(locker[y]);
		}
	}
	cout << "开着的柜门的号码为" << endl;
	for (int z = 0; z < 101; z++)
	{
		if (locker[z])
			cout << z << " ";
	}
	cout << endl;

	return 0;
}