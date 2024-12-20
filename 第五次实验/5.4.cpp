#include<iostream>
using namespace std;

class Student
{
private:
	int ID;
	double Grade;
public:
	Student(int id, double grade)
	{
		this->ID = id, this->Grade = grade;
	}
	friend void max(Student*);
};
void max(Student* Sc)
{
	Student* N = NULL;
	double x=Sc->Grade;
	for (int i = 0; i < 5; i++)
	{
		if (x < (Sc + i)->Grade) {
			x = (Sc + i)->Grade;
			N = (Sc + i);
		}
	}
	cout << "成绩最高者的学号为：" << N->ID << endl;
}
int main()
{
	Student score[5] = { Student(2024001,80),Student(2024002,90),Student(2024003,75),Student(2024004,95),Student(2024005,85) };
	Student* Sc = score;
	max(Sc);
	return 0;
}