#include<iostream>
using namespace std;

class Cuboid
{
private:
	double length;
	double width;
	double height;
	double volume;
	int n;
public:
	void set_data(int n=0)
	{
		cout << "依次输入长方体" << n << "的长、宽、高：";
		cin >> length >> width >> height;
	}
	void Volume()
	{
		volume = length * width * height;
	}
	void ShowVolume(int n=0)
	{
		cout << "长方体" << n << "的体积为：" << volume << endl;
	}
};
int main()
{
	Cuboid v1;
	Cuboid v2;
	Cuboid v3;
	v1.set_data(1);
	v2.set_data(2);
	v3.set_data(3);
	v1.Volume();
	v2.Volume();
	v3.Volume();
	v1.ShowVolume(1);
	v2.ShowVolume(2);
	v3.ShowVolume(3);
}