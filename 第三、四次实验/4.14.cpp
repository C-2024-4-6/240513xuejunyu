#include<iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int x = 0, y = 0;
	for (int i = 0; i < (size1 + size2); i++)
	{
		if (x<size1&&y<size2)
		{
			if (list1[x] < list2[y])
			{
				list3[i] = list1[x];
				x++;
			}
			else
			{
				list3[i] = list2[y];
				y++;
			}
		}
		else if (x<size1)
		{
			list3[i] = list1[x];
			x++;
		}
		else if (y<size2)
		{
			list3[i] = list2[y];
			y++;
		}
	}
}
int main()
{
	cout << "输入两组从小到大排列的数组，第一个数字为数组的元素数" << endl;
	cout << "Enter list1:";
	int size1;
	cin >> size1;
	int* list1 = new int[size1];
	for (int a = 0; a < size1; a++)
	{
		cin >> list1[a];
	}
	cout << "Enter list2:";
	int size2;
	cin >> size2;
	int* list2 = new int[size2];
	for (int b = 0; b < size2; b++)
	{
		cin >> list2[b];
	}
	int *list3=new int[size1 + size2];
	merge(list1, size1, list2, size2, list3);
	cout << "The merged list is ";
	for (int c = 0; c < (size1 + size2); c++)
	{
		cout << list3[c] << " ";
	}
	delete[]list1;
	delete[]list2;
	delete[]list3;
	return 0;
}