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
	cout << "����Ԫ�ظ���Ϊ" << maxnum << "��int������ ";
	for (int i = 0; i < maxnum; i++){
		cin >> pa[i];
	}
	sort(pa);
	cout << "����С��������Ϊ�� ";
	for (int j = 0; j < maxnum; j++) {
		cout << pa[j] << " ";
	}
	delete[]pa;
	return 0;
}