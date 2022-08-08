#include<stdio.h>
#include<string.h>
void fun(char a[], int n)
{
	int i, j;
	char t;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
}
int main()
{
	char a[20];
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®£º\n");
	gets_s(a);
	int l = strlen(a);
	fun(a, l);
	printf("%s", a);
	return 0;
}