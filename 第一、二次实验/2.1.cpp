#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char sunday;
	cout << "����һ���ַ�" << endl;
	cin >> sunday;
	int x = (int)sunday + 1;
	if (islower(sunday)) {
		char uppercase = toupper(sunday);
		std::cout << "ת���ɴ�дΪ" << uppercase << std::endl;
	}
	else {
		cout << sunday << "�ĺ���ַ���ASCII��Ϊ" << x << endl;
	}
	return 0;
}
