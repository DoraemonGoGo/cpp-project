#include<stdio.h>
#include<stdlib.h>
#define InitSize 100
typedef struct {
    int* data;
    int Maxsize, length;
}SeqList;
void AddList(SeqList& L, int e) {//À≥–Ú≤Â»Î‘™Àÿ
    L.data[L.length] = e;
    L.length++;
}
void SetLisk(SeqList& L)
{
    L.data = (int*)malloc(sizeof(int) * InitSize);
    L.length = 0;
    L.Maxsize = InitSize;
}
bool InsertLisk(SeqList& L, int i, int e)
{
    if (i<1 || i>L.length + 1)
        return false;
    if (L.length >= L.Maxsize)
        return false;
    for (int j = L.length; j >= i; j--)
        L.data[j] = L.data[j - 1];
    L.data[i] = e;
    L.length++;
    return true;
}
int main()
{
    SeqList L;
    SetLisk(L);
    int x;
    for (int i = 1; i <= 6; i++)
    {
        AddList(L, i);
    }
    for (int j = 0; j <= L.length - 1; j++)
    {
        printf("%d ", L.data[j]);
    }
    printf("\n");
    InsertLisk(L, 3, 8);
    for (int j = 0; j <= L.length - 1; j++)
    {
        printf("%d ", L.data[j]);
    }
    return 0;
}