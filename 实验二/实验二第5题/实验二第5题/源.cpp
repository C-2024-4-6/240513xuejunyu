#include<iostream>
using namespace std;

int main()
{
	int word=0, space=0, number=0, other=0;
	cout << "����һ���ַ���" << endl;
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
	cout << "Ӣ����ĸ�ĸ���Ϊ��" << word << endl;
	cout << "    �ո�ĸ���Ϊ��" << space << endl;
	cout << "    ���ֵĸ���Ϊ��" << number << endl;
	cout << "�����ַ��ĸ���Ϊ��" << other << endl;

	return 0;
}