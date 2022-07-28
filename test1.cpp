#include<stdio.h>
#include<stdlib.h>
#define Max 20
typedef struct {
    int *data;
    int length;
    int Maxsize;
}list;
void listset(list& l)//¹¹ÔìË³Ğò±í
{
    l.data = (int*)malloc(Max * sizeof(int));
}
int main()
{
    list l;
    listset(l);
    printf("pppp");
    return 0;
}