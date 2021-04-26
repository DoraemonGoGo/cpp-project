#include<iostream>
using namespace std;
class Location
{
public:
	Location()
	{
		cout << "默认构造函数的调用" << endl;
	}
	Location(int m, int n)
	{
		x = m;
		y = n;
	}
	void Init(int initX, int initY)
	{
		x=initX;
		y=initY;
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
private:
	int x, y;
};
int main()
{
	Location A;
	A.Init(3, 4);
	cout << A.getX() <<" "<< A.getY() << endl;
	system("pause");
	return 0;
}