#include<stdio.h>
#include<string.h>
#include<malloc.h>
int* fun(char s[], char a[], int n)
{
	int len = strlen(s);
	int* c = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		c[i] = 0;
		for (int j = 0; j < len; j++)
		{
			if (s[j] == a[i])
				c[i]++;
		}
	}
	return c;
}
int main()
{
	char s[100], a[100];
	int n;
	printf("�������ַ���s:\n");
	scanf_s("%s", s, 100);
	printf("�������ַ���a�ĳ���:\n");
	scanf_s("%d", &n);
	printf("�������ַ���a:\n");
	scanf_s("%s", a, 100);
	int* c = fun(s, a, n);
	for (int i = 0; i < n; i++)
		printf("a�е�%d���ַ�%c���ַ���s�г��ֵĴ���:%d\n", i + 1, a[i], c[i]);
	return 0;
}