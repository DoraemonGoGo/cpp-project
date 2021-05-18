#include<stdio.h>
double a[15][15];
double b[15];
double l[15][15];
double u[15][15];
double Y[15];
double X[15];
int main()
{
    int n;
    printf("������ϵ�������������:\n");
    scanf_s("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("������ϵ������ĵ�%d��Ԫ��:\n", i);
        for (int j = 1; j <= n; j++)
            scanf_s("%lf", &a[i - 1][j - 1]);
    }
    printf("�����볣������:\n");
    for (int i = 1; i <= n; i++)
    {
        scanf_s("%lf", &b[i - 1]);
    }
    printf("�������Ϊ:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%lf ", a[i][j]);
        printf("%lf ", b[i]);
        printf("\n");
    }
    for (int i = 0; i < n; i++)
        l[i][i] = 1;
    for (int k = 0; k < n; k++)
    {  
        for (int j = k; j < n; j++)
        {
            u[k][j] = a[k][j];
            for (int i = 0; i <= k - 1; i++)
                u[k][j] -= (l[k][i] * u[i][j]);
        }
        for (int i = k + 1; i < n; i++)
        {
            l[i][k] = a[i][k];
            for (int j = 0; j <= k - 1; j++)
                l[i][k] -= (l[i][j] * u[j][k]);
            l[i][k] /= u[k][k];
        }
    }
    for (int i = 0; i < n; i++)
    {
        Y[i] = b[i];
        for (int j = 0; j <= i - 1; j++)
            Y[i] -= (l[i][j] * Y[j]);
    }
    printf("����L:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%lf ", l[i][j]);
        }
        printf("\n");
    }
    printf("����U:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%lf ", u[i][j]);
        }
        printf("%lf", Y[i]);
        printf("\n");
    }
    for (int i = n - 1; i >= 0; i--)
    {
        X[i] = Y[i];
        for (int j = i + 1; j < n; j++)
            X[i] -= (u[i][j] * X[j]);
        X[i] /= u[i][i];
    }
    printf("���Ϊ:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%lf \n", X[i]);
    }
	return 0;
}