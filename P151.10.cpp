#include <iostream>
#include <math.h>
using namespace std;
struct Point {
	double x;
	double y;
};
double product(Point p1, Point p2, Point p3) {
	//首先根据坐标计算p1p2和p1p3的向量，然后再计算叉乘
	//p1p2 向量表示为 (p2.x-p1.x,p2.y-p1.y)
	//p1p3 向量表示为 (p3.x-p1.x,p3.y-p1.y)
	return (p2.x - p1.x) * (p3.y - p1.y) - (p2.y - p1.y) * (p3.x - p1.x);
}
int isInTriangle(Point p1, Point p2, Point p3, Point o) {
	//保证p1，p2，p3是逆时针顺序
	if (product(p1, p2, p3) == 0)//三个点在一条直线上，不能构成三角形
		return 2;
	if (product(p1, p2, p3) < 0) return isInTriangle(p1, p3, p2, o);//不是逆时针顺序
	else if (product(p1, p2, o) > 0 && product(p2, p3, o) > 0 && product(p3, p1, o) > 0)//o在12 23 31的同一侧
		return 1;
	return 0;//不在内部
}
int main() {
	Point p[4];
	for (int i = 0; i < 4; i++)
		scanf_s("%lf%lf", &p[i].x, &p[i].y);
	int flag = isInTriangle(p[1], p[2], p[3], p[4]);
	if (flag == 1)
		printf("Yes!");
	if (flag == 2)
		printf("不能构成三角形！");
	else printf("No!");
}