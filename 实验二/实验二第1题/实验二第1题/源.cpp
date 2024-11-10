#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char sunday;
	cout << "输入一个字符" << endl;
	cin >> sunday;
	int x = (int)sunday + 1;
	if (islower(sunday)) {
		char uppercase = toupper(sunday);
		std::cout << "转换成大写为" << uppercase << std::endl;
	}
	else {
		cout << sunday << "的后继字符的ASCII码为" << x << endl;
	}
	return 0;
}
