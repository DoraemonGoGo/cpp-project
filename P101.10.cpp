#include<stdio.h>
int a[100], b[100];
int main()
{
	int m, n;
	printf("请分别输入分子和分母：\n");
	scanf_s("%d%d", &m, &n);
	int s, t = m, i = 0, j = 1, flag1, flag2, flag3 = 0;
	b[0] = m;
	while (t != 0)
	{
		s = (m * 10) / n;
		t = (m * 10) % n;
		a[i] = s;
		b[j] = t;
		m = t;
		for (int k = 0; k < j; k++)
		{
			if (b[k] == t)
			{
				flag3 = 1;
				flag1 = k;
				flag2 = j - 1;
			}
		}
		if (flag3 == 1)
			break;
		i++;
		j++;
	}
	printf("小数为：\n");
	printf("0.");
	for (int l = 0; l < i + 1; l++)
		printf("%d", a[l]);
	printf("\n起止位置为：\n");
	printf("%d %d", flag1, flag2);
	return 0;
}