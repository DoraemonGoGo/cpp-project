#include<stdio.h>
#include<string.h>
#include<malloc.h>
#define N 100
char* AintersectionB(char* A, char* B)
{
	int a = strlen(A);
	int b = strlen(B);
	int c = a > b ? b : a;
	char* C;
	C = (char*)malloc(sizeof(char) * c);
	for (int i = 0; i < c; i++)
	{
		if (A[i] == B[i] && B[i] == '1')
			C[i] = '1';
		else
			C[i] = '0';
	}
	return C;
}
char* AUnionB(char* A, char* B)
{
	int a = strlen(A);
	int b = strlen(B);
	int c = a > b ? a : b;
	int d = a > b ? b : a;
	char* C;
	C = (char*)malloc(sizeof(char) * c);
	for (int i = 0; i < d; i++)
	{
		if (A[i] == '1' || B[i] == '1')
			C[i] = '1';
		else
			C[i] = '0';
	}
	if (a > b)
		for (int i = d; i < a; i++)
			C[i] = A[i];
	else
		for (int i = d; i < b; i++)
			C[i] = B[i];
	return C;
}
int main()
{
	char a[N], b[N], c1[N], c2[N];
	
	printf("请输入两个稀疏矩阵：\n");
	gets_s(a);
	gets_s(b);
	int s = strlen(a) > strlen(b) ? strlen(a) : strlen(b);
	int t = strlen(a) > strlen(b) ? strlen(b) : strlen(a);
	strcpy_s(c1, AintersectionB(a, b));
	strcpy_s(c2, AUnionB(a, b));
	printf("交集为：");
	for (int i = 0; i<t; i++)
	{
		printf("%c ", c1[i]);
	}
	printf("\n并集为：");
	for (int i = 0; i<s; i++)
	{
		printf("%c ", c2[i]);
	}
	return 0;
}