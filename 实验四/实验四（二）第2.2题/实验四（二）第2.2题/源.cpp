#include<iostream>
using namespace std;

int parseHex(const char* const hexString)
{
	int x = (int)hexString[0];
	int y = (int)hexString[1];
	if (x >= 65 && x <= 70){
		if (y >= 65 && y <= 70) {
			return (x - 55) * 16 + (y - 55);
		}
		else
			return (x - 55) * 16 + (y - 48);
	}
	else{
		if (y >= 65 && y <= 70) {
			return x * 16 + (y - 55);
		}
		else
			return x * 16 + (y - 48);
	}
}

int main()
{
	char* hexString;
	char hex[20];
	cout << "����һ��16����������ĸ��д��";
	cin.getline(hex, 20);
	hexString = hex;
	cout << "ת��Ϊ10�������� " << parseHex((char*)hexString) << endl;
	return 0;
}