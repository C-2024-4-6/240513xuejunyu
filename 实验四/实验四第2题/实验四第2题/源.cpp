#include<iostream>
using namespace std;

const int listSize = 10;

void bubble(double list[])
{
	double x;
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < (listSize-1); j++)
			if (list[j] > list[j + 1])
			{
				x = list[j];
				list[j] = list[j + 1];
				list[j + 1] = x;
				changed = true;
			}
	} while (changed);
}

int main()
{
	double list[listSize];
	for (int n = 0; n < listSize; n++)
	{
		cin >> list[n];
	}
	bubble(list);
	for (int m = 0; m < listSize; m++)
	{
		cout << list[m] << " ";
	}

	cout << endl;

	return 0;
}