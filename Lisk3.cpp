#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MaxSize 100
typedef struct {
	int data[MaxSize];
	int length;
}SqList;
bool Linkdemin(SqList& L,int& m)
{
	int e = 100000, k = -1;
	if (L.length < 1)
		return false;
	for (int i = 0; i < L.length; i++)
	{
		if (e > L.data[i])
		{
			e = L.data[i];
			k = i;
		}
	}	
	m = L.data[k];
	for (int j = k + 1; j < L.length; j++)
		L.data[j-1] = L.data[j];
	L.length--;
	return true;
}
void AddList(SqList& L)
{
	for (int x = 0; x < 5; x++)
	{
		L.length++;
		L.data[x] = x + 1;
	}	
}
int main()
{
	int n = -100,m;
	SqList L;
	L.length = 0;
	AddList(L);
	for (int j = 0; j <= L.length - 1; j++)
		printf("%d ", L.data[j]);
	printf("\n");
	Linkdemin(L,m);
	printf("%d\n", m);
	for (int j = 0; j <= L.length - 1; j++)
		printf("%d ", L.data[j]);
	return 0;
}