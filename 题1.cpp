//Ҫ���ҳ����������������ĸ���
//������һ����Ȼ��n��Ȼ��Դ���Ȼ���������·������д���
//1.�����κδ���
//2.��������߼���һ����Ȼ��������Ȼ�����ܳ���ԭ����һ��
//3.�������󣬼������˹�����д���ֱ�������ټ���Ȼ��Ϊֹ
//�ݹ�

#include<stdio.h>
#include <iostream>
using namespace std;
int getwei(int x)    //ȡһ������λ
{
	int i = 0;
	while (x != 0)
	{
		x = x / 10;
		i += 1;
	}
	return i;

}
int getfirst(int x)   //ȡ���ֵĵ�һλ
{
	while (x >= 10)
	{
		x = x / 10;
	}
	return x;
}
void function(int x)
{
	int i = 1, j = 0,p = 1,q = 0,m = 1,n = 0;   //��Ϊswitch��3����֧�ֱ�Ϊ1λ����2λ����3λ����Ϊ���������Զ�����6������
	int num = 1; //�м�����������������
	int two;   //2λ����������
	int three;  //3λ����������
	int wei = getwei(x); //1,2,3
	switch (wei)
	{
	case 1:
		for (i; i <= x / 2; i++)
		{
			if (x >= 4)
			{
				printf("%d\n", 10 * i + x);
				num += 1;
				for (j = 1; j <= i / 2; j++)
				{
					printf("%d\n", 100 * j + 10 * i + x);
					num += 1;
				}
			}
			else
			{
				printf("%d\n", 100 * j + 10 * i + x);
				num += 1;
			}
		}
		break;
	case 2:
		two = getfirst(x);
		for (m; m <= two / 2; m++)
		{
			if (two >= 4)
			{
				printf("%d\n", 100 * m + x);
				num += 1;
				for (n = 1; n <= m / 2; n++)
				{
					printf("%d\n", 1000 * n + 100 * m + x);
					num += 1;
				}
			}
			else
			{
				printf("%d\n", 1000 * n + 100 * m + x);
				num += 1;
			}
		}
		break;
	case 3:
		three = getfirst(x);
		for (p; p <= three / 2; p++)
		{
			if (three >= 4)
			{
				printf("%d\n", 1000 * p + x);
				num += 1;
				for (q = 1; q <= p / 2; q++)
				{
					printf("%d\n", 10000 * q + 1000 * p + x);
					num += 1;
				}
			}
			else
			{
				printf("%d\n", 10000 * q + 1000 * p + x);
				num += 1;
			}
		}
		break;
	}
	if (getwei(x) <= 2 && getfirst(x) >= 8)    //��������Ĵ�����Ϊ��4λ���ĳ��� ����switch����û�������Ծͷ�������
	{
		num += 1;
		if (getwei(x) == 2)
		{
			printf("%d\n", x + 1 * 10000 + 2 * 1000 + 4 * 100);
		}
		else {
			printf("%d\n", x + 1 * 1000 + 2 * 100 + 4 * 10);
		}
	}
	printf("һ���У�%d����\n", num);
}
int main() 
{
	int num = 900;
	bool first = true;
	cout << "������һ������" << endl;
	if (first)
	{
		cin >> num;
		first = false;
	}
	else
	{
		cout << "ERROR NUM" <<num;
	}
		cout << "������������Ϊ��"<<endl;
		function(num);
}

