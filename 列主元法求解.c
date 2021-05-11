#include <stdio.h>
#include <math.h>
#define MAX 15
double a[MAX][MAX];
double b[MAX];
double X[MAX];
int NUM;
void xiaoyuan()
{
    int t;
    double max, temp, m, sum;
    for (int k = 0; k < NUM - 1; k++)
    {
        t = k;
        max = 0;
        for (int i = k; i < NUM; i++)
        {
            if (fabs(a[i][k]) > max)
            {
                max = fabs(a[i][k]);
                t = i;
            }
        }
        for (int j = k; j < NUM; j++)
        {
            temp = a[k][j];
            a[k][j] = a[t][j];
            a[t][j] = temp;
        }
        temp = b[k];
        b[k] = b[t];
        b[t] = temp;
        for (int i = k + 1; i < NUM; i++)//消元过程
        {
            m = a[i][k] / a[k][k];
            for (int j = k; j < NUM; j++)
                a[i][j] -= m * a[k][j];
            b[i] -= m * b[k];
        }
    }
    printf("消元后的矩阵:\n");
    for (int i = 0; i < NUM; i++)
    {
        for (int j = 0; j < NUM; j++)
            printf("%lf ", a[i][j]);
        printf("%lf ", b[i]);
        printf("\n");
    }
    printf("\n");
    X[NUM-1] = b[NUM-1] / a[NUM-1][NUM-1];
    for (int i = NUM - 2; i >= 0; i--)
    {
        sum = 0;
        for (int j = i + 1; j < NUM; j++)
            sum += a[i][j] * X[j];
        X[i] = (b[i] - sum) / a[i][i];
    }
    printf("结果X:\n");
    for (int i = 0; i < NUM; i++)
    {
        printf("%lf\n", X[i]);
    }
}

int main()
{
    int i, j;
    printf("请输入系数矩阵的行列数:\n");
    scanf_s("%d", &NUM);
    for (i = 1; i <= NUM; i++)
    {
        printf("系数矩阵的第%d行元素:\n", i);
        for (j = 1; j <= NUM; j++)
            scanf_s("%lf", &a[i - 1][j - 1]);
    }
    printf("常数矩阵为:\n");
    for (i = 1; i <= NUM; i++)
    {
        scanf_s("%lf", &b[i - 1]);
    }
    printf("输入的系数矩阵为:\n");
    for (i = 0; i < NUM; i++)
    {
        for (j = 0; j < NUM; j++)
            printf("%lf ", a[i][j]);
        printf("\n");
    }
    printf("增广矩阵为:\n");
    for (i = 0; i < NUM; i++)
    {
        for (j = 0; j < NUM; j++)
            printf("%lf ", a[i][j]);
        printf("%lf ", b[i]);
        printf("\n");
    }
    printf("\n");
    xiaoyuan();
    return 0;
}
