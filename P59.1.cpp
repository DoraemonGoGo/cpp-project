#include<stdio.h>
int a[200];
void insert(int k)//��������
{
	int i;
	for (i = 0; i < 200; i++)//����������Ѿ������Ԫ�أ�ֱ�ӷ���
		if (a[i] == k)
			return;
	for (i = 199; i >= 0; i--)
	{
		if (a[i] == 0)//���a[i]����0����������ѭ��
			continue;
		if (k < a[i])
			a[i + 1] = a[i];//����Ԫ�غ���
		else
		{
			a[i + 1] = k;//����
			return;
		}
	}
}
int main()
{
	int count = 0, n, y, z;
	a[0] = 1;
	for (int i = 0; i < 200; i++)
	{
		n = a[i];
		printf("%d\t", a[i]);
		count++;//ͳ�Ƹ���
		y = 2 * n + 1;
		z = 3 * n + 1;
		insert(y);
		insert(z);
		if (count == 100)//����ﵽ100��ֹͣѭ��
			break;
	}
	return 0;
}