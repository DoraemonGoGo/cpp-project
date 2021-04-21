#include<iostream>
using namespace std;
const double PI = 3.14;
class Cricle
{
public:
	int m_r;
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};
int main()
{
	Cricle c1;
	c1.m_r = 5;
	cout << "圆的周长为：" << c1.calculateZC() << endl;
	system("pause");
	return 0;
}