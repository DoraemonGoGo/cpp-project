#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], ch;
	int i = 0, t = 1, sum = 0;
	printf("请输入要转换的字符:\n");
	while ((ch = getchar()) != '*')
	{
		a[i] = ch;
		i++;
	}
	a[i] = '\0';
	i--;
	while (i >= 0)
	{
		sum += (a[i] - '0') * t;
		t *= 2;
		i--;
	}
	printf("%d", sum);
	return 0;
}