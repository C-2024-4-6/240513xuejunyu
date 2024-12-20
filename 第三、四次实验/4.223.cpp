#include<iostream>
using namespace std;

int maxnum = 5;
void sort(int pa[])
{
	for (int x = 0; x < maxnum - 1; x++) {
		for (int y = x + 1; y < maxnum; y++) {
			if (pa[x] > pa[y]) {
				int p;
				p = pa[x];
				pa[x] = pa[y];
				pa[y] = p;
			}
		}
	}
}

int main()
{
	int* pa = new int[maxnum];
	cout << "输入元素个数为" << maxnum << "的int型数组 ";
	for (int i = 0; i < maxnum; i++){
		cin >> pa[i];
	}
	sort(pa);
	cout << "按从小到大排序为： ";
	for (int j = 0; j < maxnum; j++) {
		cout << pa[j] << " ";
	}
	delete[]pa;
	return 0;
}