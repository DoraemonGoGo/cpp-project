#include<stdio.h>
int main()
{
	char a[100];
	printf("�������ַ�����\n");
	gets_s(a);
	int i = 0;
	while (a[i] != '\0')
	{
		while (a[i] == 'Y' || a[i] == 'N')
			i++;
		if (a[i] == '2')
			i++;
		else
			break;
		while (a[i] == 'y' || a[i] == 'n')
			i++;
		if (a[i] == '1')
			i++;
		else
			break;
	}
	if (a[i - 1] == '1' || a[i - 1] == '2')
	{
		if (a[i] == '\0')
			printf("���ַ��������������˵ĶԻ���\n");
		else
			printf("���ַ����������������˵ĶԻ���\n");
	}
	else
		printf("���ַ����������������˵ĶԻ���\n");
	return 0;
}