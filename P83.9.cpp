#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®£º\n");
	gets_s(a);
	int count1 = 0, count2 = 0, count3 = 0;
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
			count1 = 1;
		else if (a[i] >= 'a' && a[i] <= 'z')
			count2 = 1;
		else if (a[i] >= '0' && a[i] <= '9')
			count3 = 1;
	}
	if (count1 + count2 + count3 >= 2)
		printf("YES!!");
	else
		printf("No!!");
	return 0;
}