#include<stdio.h>
#include<math.h>
double ax[100], ay[100];
double Distance(int i, int j)
{
	return sqrt(pow((ax[i] - ax[j]), 2) + pow((ay[i] - ay[j]), 2));
}
int main()
{
	int n, posti, postj, postk;
	double maxarea = 0;
	printf("请输入点的个数：\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
		scanf_s("%lf%lf", &ax[i], &ay[i]);
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				double s = (Distance(i, j) + Distance(i, k) + Distance(j, k)) / 2;
				double area = sqrt(s * (s - Distance(i, j)) * (s - Distance(i, k)) * (s - Distance(j, k)));
				if (area > maxarea)
				{
					maxarea = area;
					posti = i;
					postj = j;
					postk = k;
				}
			}
		}
	}
	printf("最大面积为：");
	printf("%lf\n", maxarea);
	printf("三个点分别为:\n");
	printf("%lf %lf\n", ax[posti], ay[posti]);
	printf("%lf %lf\n", ax[postj], ay[postj]);
	printf("%lf %lf", ax[postk], ay[postk]);
	return 0;
}