#include<iostream>
using namespace std;

int main()
{
	int word=0, space=0, number=0, other=0;
	cout << "输入一行字符：" << endl;
	char c;
	c = getchar();
	while (c != '\n')
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		{
			word++;
		}
		else if (c == ' ')
		{
			space++;
		}
		else if (c >= '0' && c <= '9')
		{
			number++;
		}
		else 
		{
			other++;
		}
		c = getchar();
	}
	cout << "英文字母的个数为：" << word << endl;
	cout << "    空格的个数为：" << space << endl;
	cout << "    数字的个数为：" << number << endl;
	cout << "其他字符的个数为：" << other << endl;

	return 0;
}