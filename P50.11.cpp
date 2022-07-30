#include<stdio.h>
int main()
{
	int sum = 0, i, count=0;
	char s[100];
	printf("ÇëÊäÈë×Ö·û´®£º");
	scanf_s("%s", s, 100);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			sum = s[i] - '0' + 10 * sum;
		}
		else
		{
			printf("´íÎó£¡\n");
			break;
		}
	}
	if (s[i] == '\0')
		printf("%d\n", sum);
	return 0;
}