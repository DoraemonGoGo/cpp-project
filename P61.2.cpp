#include<stdio.h>
int main()
{
    int n;
    printf("请输入一个数：");
    scanf_s("%d", &n);
    for (int i = 0; i < (1 << n); i++) //从0～2^n-1个状态,共2^n个集合，（1<<n）等于1*(2^n)
    {
        printf("{");
        int flag = 0;
        for (int j = 0; j < n; j++) //遍历二进制的每一位
        {
            if (i & (1 << j))//判断二进制第j位是否存在    按位与&运算，同1才为1,1<<j等于1的二进制左移j位
            {
                if (flag == 1)//如果是第一个元素不需要打逗号
                    printf(",");
                printf("%d", j);//如果存在输出第j个元素
                flag = 1;
            }
        }
        printf("}\n");
    }
    return 0;
}

