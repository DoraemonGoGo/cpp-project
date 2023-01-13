#include<stdio.h>

int place[15] = { 0 };
bool flag[15] = { 1 ,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };
bool d1[30] = { 1 ,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };
bool d2[30] = { 1 ,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };
int number = 0;

void gernerate(int n, int m);
void print(int m);

int main()
{
	int N;
	printf("ÇëÊäÈëN£º\n");
	scanf_s("%d", &N);
	gernerate(0, N);
	return 1;
}

void gernerate(int n, int m)
{
	for (int col = 0; col < m; col++)
	{
		if ((flag[col] && d1[n - col + m - 1]) && d2[n + col])
		{
			place[n] = col;
			flag[col] = false;
			d1[n - col + m - 1] = false;
			d2[n + col] = false;
			if (n < m - 1)
				gernerate(n + 1, m);
			else
				print(m);

			//»ØËİ
			flag[col] = true;
			d1[n - col + m - 1] = true;
			d2[n + col] = true;
		}
	}
}
void print(int m)
{
	int col, i, j;
	number++;
	printf("NO.%d:\n", number);
	/*for (int col = 0; col < 8; ++col)
	{
		for (int j = 0; j < 8; ++j)
		{
			if (place[col] == j)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
	printf("\n");*/
	int graph[15][15] = { 0 };
	for (col = 0; col < m; col++)
		graph[col][place[col]] = 1;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", graph[j][i]);
		}
		printf("\n");
	}
}