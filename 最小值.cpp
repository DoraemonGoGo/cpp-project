#include <stdio.h>
#include <stdlib.h>
void data(double* x, double* y, int n); 
void newton(double* x, double* y, double* f, int n);
void printnew(double* x, double* y, double* f, int n);
void newvalue(double* x, double* y, double* f, int n);
int main(void)
{
    int n;
    double* x, * y, * f;
    printf("输入要插值节点的个数:");
    scanf_s("%d", &n);
    x = (double*)malloc(sizeof(double) * n);
    y = (double*)malloc(sizeof(double) * n);
    f = (double*)malloc(sizeof(double) * (n - 1) * n / 2);
    data(x, y, n);
    newton(x, y, f, n - 1);
    printnew(x, y, f, n);
    do {
        newvalue(x, y, f, n);
    } while (1);
    return 0;
}
void data(double* x, double* y, int n)
{ 
    int i = 0;
    while (i < n) {
        printf("x[%d]:", i);
        scanf_s("%lf", &x[i]);
        printf("y[%d]:", i);
        scanf_s("%lf", &y[i]);
        i++;
    }
}
void newton(double* x, double* y, double* f, int n)
{ 
    int i = 0, j, k = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < n - i; j++) {
            if (i == 0)
                f[k++] = (y[j + 1] - y[j]) / (x[j + 1] - x[j]);
            else {
                f[k] = (f[k + i - n] - f[k + i - n - 1]) / (x[j + i + 1] - x[j]);
                k++;
            }
        }
}
void printnew(double* x, double* y, double* f, int n)
{ 
    int i, j, k = 0;
    printf("差商表:\n");
    printf("x\t  ");
    for (i = 0; i < n; i++)
        printf("f(x%d)\t\t", i);
    printf("\n");
    for (i = 0; i < n; i++)
        printf("----------------");
    printf("\n");
    for (i = 0; i < n; i++) {
        printf("%-10g  %-10g", x[i], y[i]);
        k = i - 1;
        for (j = 0; j < i; j++) {
            printf("     %-10g", f[k]);
            k += n - 2 - j;
        }
        if (j == i)
            printf("\n");
    }
}
void newvalue(double* x, double* y, double* f, int n)
{ 
    double a, * b;
    int i, k = 0;
    b = (double*)malloc(sizeof(double) * n);
    printf("输入要要插入节点的X的值:");
    scanf_s("%lf", &a);
    b[0] = 1.0;
    for (i = 0; i < n - 1; i++)
        b[i + 1] = b[i] * (a - x[i]);
    for (i = 0; i < n; i++) {
        if (i == 0)
            a = y[0];
        else {
            a += b[i] * f[k];
            k += n - i;
        }
    }
    printf("插值节点对应的Y的值:%lf\n", a);
}
