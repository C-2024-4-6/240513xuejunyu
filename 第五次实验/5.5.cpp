#include<iostream>
using namespace std;
class Point
{
private:
	long x;
	long y;
public:
	Point(long a = 60, long b = 80)
	{
		this->x = a, this->y = b;
	}
	void setPoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
	~Point()
	{
		x = 0;
		y = 0;
	}
};
int main()
{
	Point p1;
	Point p2(100, 120);
	Point p3(40, 60);
	p1.setPoint(1, 1);
	p2.setPoint(10, 20);
	p3.setPoint(10, 20);
	p1.display();
	p2.display();
	p3.display();

	return 0;
}