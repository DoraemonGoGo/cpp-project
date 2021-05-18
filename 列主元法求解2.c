#include <stdio.h>
#include <math.h>
double  a[100][100];
double  t[100][100];
double  x[100];
double  abbs(double  a)
{
    if (a >= 0)
        return a;
    if (a < 0)
        return -a;
}
int main()
{

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            scanf_s("%lf", &a[i][j]);
        }
    }
    for (int j = 1; j <= 3; j++)
    {
        int maxx = 0;
        int n = j;
        int flag = 0;
        for (int i = j; i <= 3; i++)
        {
            if (abbs(a[i][j]) >= maxx)
            {
                maxx = i;
            }
        }
        printf("%d\n", maxx);
        for (int s = 1; s <= 4; s++)
        {
            t[n][s] = a[n][s];
            a[n][s] = a[maxx][s];
            a[maxx][s] = t[n][s];
        }
        printf("\n");
        for (int d = 1; d <= 3; d++)
        {
            for (int f = 1; f <= 4; f++)
            {
                printf("%lf ", a[d][f]);
            }
            printf("\n");
        }
        printf("\n");
        for (int g = n + 1; g <= 3; g++)
        {
            double t = a[g][n] / a[n][n];
            for (int h = g; h <= 4; h++)
            {
                a[g][h] = a[g][h] + t* (-a[n][h]);

            }
            printf("\n");
        }
        for (int k = 1; k <= 3; k++)
        {
            for (int l = 1; l <= 4; l++)
            {
                printf("%lf ", a[k][l]);
            }
            printf("\n");
        }
    }
    x[3] = a[3][4] / a[3][3];
    x[2] = (a[2][4] - a[2][3] * x[3]) / a[2][2];
    x[1] = (a[1][4] - a[1][3] * x[3] - a[1][2] * x[2]) / a[1][1];
    for (int i = 1; i <= 3; i++)
    {
        printf("%lf\n", x[i]);
    }
}