#include<iostream>
using namespace std;

void count(const char s[], int counts[])
{
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
			counts[s[i] - 65]++;
		else if (s[i] >= 97 && s[i] <= 122)
			counts[s[i] - 97]++;
	}
}
int main()
{
	int counts[26];
	for (int a = 0; a < 26; a++)
		counts[a] = 0;
	char s[100];
	cout << "Enter a string:";
	cin.getline(s, 99);
	count(s, counts);
	for (int j = 0; j < 26; j++)
	{
		if (counts[j] != 0)
			cout << char(j + 97) << ": " << counts[j] << " times" << endl;
	}
	return 0;
}