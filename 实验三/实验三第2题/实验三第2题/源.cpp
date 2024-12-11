#include<iostream>
using namespace std;

bool is_prime(int num)
{
	if (num >= 2)
	{
		for (int n = 2; n < (num/2); n++)
		{
			if (num % n == 0)
				return false;
			break;
		}
			return true;
	}
	else
	{
		cout << "error" << endl;
		return false;
	}
}

int main()
{
	int n = 0, y = 0;
	for (int i = 2; n < 200; i++)
	{
		if(is_prime(i))
		{
			cout << i << " ";
			y++;
			n++;
			while (y == 10)
			{
				y = 0;
				cout << endl;
			}
		
		}
	}
	return 0;
}