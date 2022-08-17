#include<stdio.h>
#include<math.h>
struct Point
{
	double x, y;
};
int main()
{
	Point p[5];
	printf("请输入三个点:\n");
	for (int i = 0; i < 3; i++)
		scanf_s("%lf%lf", &p[i + 1].x, &p[i + 1].y);
	double A1 = 2 * (p[3].y - p[2].y);
	double B1 = 2 * (p[2].x - p[1].x);
	double A2 = 2 * (p[2].y - p[1].y);
	double B2 = 2 * (p[3].x - p[2].x);
	double C1 = pow(p[2].x, 2) + pow(p[2].y, 2) - pow(p[1].x, 2) - pow(p[1].y, 2);
	double C2 = pow(p[3].x, 2) + pow(p[3].y, 2) - pow(p[2].x, 2) - pow(p[2].x, 2);
	double X = ((A1 * C1) - (A2 * C2)) / (A1 * B1 - A2 * B2);
	double Y = ((-B2 * C1) + (B1 * C2)) / (A1 * B1 - A2 * B2);
	double R = sqrt(pow((p[1].x - X), 2) + pow((p[1].y - Y), 2));
	printf("圆心坐标为：%lf %lf\n", X, Y);
	printf("半径为：%lf", R);
	return 0;
}