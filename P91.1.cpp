#include<stdio.h>
#include<string.h>
void sort(char str[][10], int n)
{
	int i, j;
	char t[10];
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (strcmp(str[i], str[j]) > 0)
			{
				strcpy_s(t, str[i]);
				strcpy_s(str[i], str[j]);
				strcpy_s(str[j], t);
			}
		}
	}
}
int main()
{
	char a[80][10];
	int i, j, n;
	printf("�������ַ����ĸ�����\n");
	scanf_s("%d", &n);
	printf("������%d���ַ�����\n", n);
	for (i = 0; i < n; i++)
		scanf_s("%s", a[i], 10);
	sort(a, n);
	printf("�����Ľ��Ϊ��\n");
	for (i = 0; i < n; i++)
		printf("%s\n", a[i]);
	return 0;
}