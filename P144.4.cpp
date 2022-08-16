#include<stdio.h>
#include<math.h>
struct Point
{
	double x;
	double y;
};
Point Distance(Point P, Point Q)
{
	Point S;
	S.x = P.x - Q.x;
	S.y = P.y = P.y;
	return S;
}
double chaCheng(Point P, Point Q)
{
	return P.x * Q.y - P.y * Q.x;
}
double Area(Point P, Point Q, Point O)
{
	return fabs(chaCheng(Distance(Q, P), Distance(O, P)) / 2.0);
}
int main()
{
	int n, s = -1, t = -1, u = -1;
	printf("�������ĸ���:\n");
	scanf_s("%d", &n);
	struct Point p[200] = { 0 };
	printf("������ÿ����:\n");
	for (int i = 0; i < n; i++)
		scanf_s("%lf%lf", &p[i].x, &p[i].y);
	double min = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (Area(p[i], p[j], p[k]) > min)
				{
					min = Area(p[i], p[j], p[k]);
					s = i;
					t = j;
					u = k;
				}
			}
		}
	}
	printf("������Ϊ:\n");
	printf("%lf\n", min);
	printf("��Ӧ�ĵ�Ϊ��\n");
	printf("%lf %lf\n", p[s].x, p[s].y);
	printf("%lf %lf\n", p[t].x, p[t].y);
	printf("%lf %lf", p[u].x, p[u].y);
	return 0;
}