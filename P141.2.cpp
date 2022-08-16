#include<stdio.h>
#include<math.h>
struct Point
{
	float x;
	float y;
};
double Distance(Point P, Point Q)
{
	return pow(P.x - Q.x, 2) + pow(P.y - Q.y, 2);
}
int main()
{
	int n, s = -1, t = -1;
	printf("�������ĸ���:\n");
	scanf_s("%d", &n);
	struct Point p[200] = { 0 };
	printf("������ÿ����:\n");
	for (int i = 0; i < n; i++)
		scanf_s("%f%f", &p[i].x, &p[i].y);
	float min = Distance(p[0], p[1]);
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Distance(p[i], p[j]) < min)
			{
				min = Distance(p[i], p[j]);
				s = i;
				t = j;
			}
		}
	}
	printf("��С����Ϊ:\n");
	printf("%f\n", sqrt(min));
	printf("��Ӧ�ĵ�Ϊ��\n");
	printf("%f %f\n", p[s].x, p[s].y);
	printf("%f %f", p[t].x, p[t].y);
	return 0;
}