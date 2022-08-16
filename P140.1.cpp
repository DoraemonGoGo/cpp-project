#include<stdio.h>
#include<math.h>
struct Point
{
	float x;
	float y;
};
int isIncircle(Point p, Point o, float r)
{
	if ((p.x - o.x) * (p.x - o.x) + (p.y - o.y) * (p.y - o.y) < r * r)
		return 1;
	else if ((p.x - o.x) * (p.x - o.x) + (p.y - o.y) * (p.y - o.y) == r * r)
		return 0;
	else
		return 2;
}
int main()
{
	Point P, O;
	float R;
	printf("请输入一个点的坐标：\n");
	scanf_s("%f%f", &P.x, &P.y);
	printf("请输入圆心：\n");
	scanf_s("%f%f", &O.x, &O.y);
	printf("请输入半径：\n");
	scanf_s("%f", &R);
	if (isIncircle(P, O, R) == 1)
		printf("点在圆内");
	if (isIncircle(P, O, R) == 0)
		printf("点在圆上");
	if (isIncircle(P, O, R) == 2)
		printf("点在圆外");
	return 0;
}