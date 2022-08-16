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
	printf("������һ��������꣺\n");
	scanf_s("%f%f", &P.x, &P.y);
	printf("������Բ�ģ�\n");
	scanf_s("%f%f", &O.x, &O.y);
	printf("������뾶��\n");
	scanf_s("%f", &R);
	if (isIncircle(P, O, R) == 1)
		printf("����Բ��");
	if (isIncircle(P, O, R) == 0)
		printf("����Բ��");
	if (isIncircle(P, O, R) == 2)
		printf("����Բ��");
	return 0;
}