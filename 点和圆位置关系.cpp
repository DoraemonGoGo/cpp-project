#include<iostream>
using namespace std;
class Point
{
public:
	void setX(int X)
	{
		m_X = X;
	}
	int getX()
	{
		return m_X;
	}
	void setY(int Y)
	{
		m_Y = Y;
	}
	int getY()
	{
		return m_Y;
	}
private:
	int m_X;
	int m_Y;
};
class Circle
{
public:
	void setR(int R)
	{
		m_R = R;
	}
	int getR()
	{
		return m_R;
	}
	void setCenter(Point Center)
	{
		m_Center = Center;
	}
	Point getCenter()
	{
		return m_Center;
	}
private:
	int m_R;
	Point m_Center;
};
void isInCenter(Circle c,Point p)
{
	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX())
		+ (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	int Distance = c.getR() * c.getR();
	if (distance == Distance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > Distance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}
int main() 
{
	int T;
	cout << "请输入要测试的次数" << endl;
	cin >> T;
	while (T--)
	{
		Circle c;
		Point p;
		Point p1;
		int r;
		cout << "请输入圆的半径" << endl;
		cin >> r;
		c.setR(r);
		int x1, y1;
		cout << "请输入圆心x y坐标" << endl;
		cin >> x1 >> y1;
		p1.setX(x1);
		p1.setY(y1);
		c.setCenter(p1);
		cout << "请输入点x y坐标" << endl;
		int x2, y2;
		cin >> x2 >> y2;
		p.setX(x2);
		p.setY(y2);
		isInCenter(c, p);
	}
	system("pause");
	return 0;
}