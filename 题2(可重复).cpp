//�г����д�����1������n��������Ȼ�������У����������������������п��Գ����ظ������֣�1<=n<=7��
//�ǵݹ�

#include<stdio.h>
int main()
{
    int n, i, j, k, q, w, e, r, t, u;
    scanf_s("%d", &n);
    if (n == 1) printf("1");
    if (n == 2)
    {
        for (i = 1; i <= n; i++)
            for (k = 1; k <= n; k++)
            {
                printf("%d %d\n", i, k);
                if (i == n && k == n - 1) break;
            }
        printf("2 2");
    }
    if (n == 3)
    {
        for (i = 1; i <= n; i++)
            for (k = 1; k <= n; k++)
                for (j = 1; j <= n; j++)
                {
                    printf("%d %d %d\n", i, k, j);
                    if (i == n && k == n && j == n - 1) break;
                }
        printf("3 3 3");
    }
    if (n == 4)
    {
        for (i = 1; i <= n; i++)
            for (k = 1; k <= n; k++)
                for (j = 1; j <= n; j++)
                    for (q = 1; q <= n; q++)
                    {
                        printf("%d %d %d %d\n", i, k, j, q);
                        if (i == n && k == n && j == n && q == n - 1) break;
                    }
        printf("4 4 4 4");
    }
    if (n == 5)
    {
        for (i = 1; i <= n; i++)
            for (k = 1; k <= n; k++)
                for (j = 1; j <= n; j++)
                    for (q = 1; q <= n; q++)
                        for (w = 1; w <= n; w++)
                        {
                            printf("%d %d %d %d %d\n", i, k, j, q, w);
                            if (i == n && k == n && j == n && q == n && w == n - 1) break;
                        }
        printf("5 5 5 5 5");
    }
    if (n == 6)
    {
        for (i = 1; i <= n; i++)
            for (k = 1; k <= n; k++)
                for (j = 1; j <= n; j++)
                    for (q = 1; q <= n; q++)
                        for (w = 1; w <= n; w++)
                            for (e = 1; e <= n; e++)
                            {
                                printf("%d %d %d %d %d %d\n", i, k, j, q, w, e);
                                if (i == n && k == n && j == n && q == n && w == n && e == n - 1) break;
                            }
        printf("6 6 6 6 6 6");
    }
    if (n == 7)
    {
        for (i = 1; i <= n; i++)
            for (k = 1; k <= n; k++)
                for (j = 1; j <= n; j++)
                    for (q = 1; q <= n; q++)
                        for (w = 1; w <= n; w++)
                            for (e = 1; e <= n; e++)
                                for (r = 1; r <= n; r++)
                                {
                                    printf("%d %d %d %d %d %d %d\n", i, k, j, q, w, e, r);
                                    if (i == n && k == n && j == n && q == n && w == n && e == n && r == n - 1) break;
                                }
        printf("7 7 7 7 7 7 7");
    }
}