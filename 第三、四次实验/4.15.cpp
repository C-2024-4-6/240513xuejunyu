#include<iostream>
using namespace std;

int indexOf(const char s1[], const char s2[])
{
	int sign = 0;
	if (s1 > s2)
		return -1;
	else{
		for (int i = 0; i < strlen(s2); i++){
			sign = -1;
			if (s2[i] == s1[0]){
				int a = i;
				int j = 0;
				while (s2[i] == s1[j]){
					i++; j++;
					}
				if (j == strlen(s1)){
					sign = a;
					break;
					}
				}
			}
		return sign;
	}
}
int main()
{
	const int max = 99;
	char s1[max], s2[max];
	cout << "Enter the first string:";
	cin.getline(s1, 99);
	cout << "Enter the second string:";
	cin.getline(s2, 99);
	cout << "indexOf(¡°" << s1 << ", " << s2 << ")¡±is " << indexOf(s1, s2) << endl;
	return 0;
}