#include<iostream>
#include"student.h"
int main()
{
	Student stud;
	Student stud1(123,"robin",'m');
	stud.display();
	stud1.display();
	stud1.set_value(666, "rubia", 'f');
	stud1.display();
	return 0;
}