#include<stdio.h>
#include<math.h>
int main()
{
	printf("������������:");
	int m, n,t;
	scanf_s("%d %d", &m, &n);
	t = m;
	while (n!=0)
	{
		m = n;
		n = t % n;
		t = m;
	}
	printf("��Լ��Ϊ:%d\n", m);
	if (m != 1)
		printf("�������������ʣ�");
	else
		printf("�����������ʣ�");
}