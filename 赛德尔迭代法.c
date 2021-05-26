#include <stdio.h>
#include<math.h>
#define MAX 10
double A[MAX][MAX];
double b[MAX];
double X[MAX];
double Y[MAX];
double X0[MAX];
int NUM;
double s = 0.5e-4;
int wucha()
{
    int flag = 1;
    double sum1 = 0;
    for (int i = 0; i < NUM; i++)
    {
        if (Y[i] - X[i] > s)
            flag = 0;
    }
    return flag;
}
int main()
{
    printf("������ϵ������Ľ���:\n");
    scanf_s("%d", &NUM);
    for (int i = 1; i <= NUM; i++)
    {
        printf("������ϵ������ĵ�%d��Ԫ��:\n", i);
        for (int j = 1; j <= NUM; j++)
            scanf_s("%lf", &A[i - 1][j - 1]);
    }
    printf("�����볣������:\n");
    for (int i = 1; i <= NUM; i++)
    {
        scanf_s("%lf", &b[i - 1]);
    }
    printf("�������Ϊ:\n");
    for (int i = 0; i < NUM; i++)
    {
        for (int j = 0; j < NUM; j++)
        {
            printf("%lf ", A[i][j]);
        }
        printf("%lf \n", b[i]);
    }
    printf("�����������ֵ:\n");
    for (int i = 1; i <= NUM; i++)
    {
        scanf_s("%lf", &X0[i - 1]);
    }
    for (int i = 0; i < NUM; i++)
    {
        X[i] = X0[i];
        Y[i] = X0[i];
    }
    int t = 0;
    do
    { 
        t++;
        for (int i = 0; i < NUM; i++)
            X[i] = Y[i];
        double sum;
        for (int i = 0; i < NUM; i++)
        {
            sum = 0;
            for (int j = 0; j < i; j++)
                sum += A[i][j] * Y[j];
            for (int j = i + 1; j < NUM; j++)
                sum += A[i][j] * X[j];
            Y[i] = (b[i] - sum) / A[i][i];
        }
        printf("��%d�ε������:\n", t);
        for (int i = 0; i < NUM; i++)
        {
            printf("%lf   ", Y[i]);
        }
        printf("\n");
    } while (wucha() == 0);
    printf("������Ľ�Ϊ:\n");
    for (int i = 0; i < NUM; i++)
    {
        printf("%lf  ", Y[i]);
    }
    return 0;
}
