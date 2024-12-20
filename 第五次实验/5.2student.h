#pragma once
using namespace std;
class Student
{
private:
	int num;
	char name[20];
	char sex;
public:
	Student(int num=0, const char name[20]="aaa", const char sex='0')
	{
		this->num = num;
		for (int i = 0; i < 20; i++)
		{
			this->name[i] = name[i];
		}
		this->sex = sex;
	}
	void display();
	void set_value(int num, const char name[], char sex)
	{
		this->num = num;
		for (int j = 0; j < 20; j++)
		{
			this->name[j] = name[j];
		}
		this->sex = sex;
	}
};