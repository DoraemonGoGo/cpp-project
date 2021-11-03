//要求找出具有下列性质数的个数
//先输入一个自然数n，然后对此自然数按照如下方法进行处理：
//1.不作任何处理；
//2.在他的左边加上一个自然数，但自然数不能超过原数的一半
//3.加上数后，继续按此规则进行处理，直到不能再加自然数为止
//递归

#include<stdio.h>
#include <iostream>
using namespace std;
int getwei(int x)    //取一共多少位
{
	int i = 0;
	while (x != 0)
	{
		x = x / 10;
		i += 1;
	}
	return i;

}
int getfirst(int x)   //取数字的第一位
{
	while (x >= 10)
	{
		x = x / 10;
	}
	return x;
}
void function(int x)
{
	int i = 1, j = 0,p = 1,q = 0,m = 1,n = 0;   //因为switch有3个分支分别为1位数，2位数和3位数。为了区分所以定义了6个变量
	int num = 1; //有几个满足条件的数字
	int two;   //2位数的首数字
	int three;  //3位数的首数字
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
	if (getwei(x) <= 2 && getfirst(x) >= 8)    //特殊情况的处理。因为有4位数的出现 但是switch里面没处理，所以就放在这了
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
	printf("一共有：%d个数\n", num);
}
int main() 
{
	int num = 900;
	bool first = true;
	cout << "请输入一个数：" << endl;
	if (first)
	{
		cin >> num;
		first = false;
	}
	else
	{
		cout << "ERROR NUM" <<num;
	}
		cout << "满足条件的数为："<<endl;
		function(num);
}

