#include<stdio.h>
int main()
{
    int n;
    printf("������һ������");
    scanf_s("%d", &n);
    for (int i = 0; i < (1 << n); i++) //��0��2^n-1��״̬,��2^n�����ϣ���1<<n������1*(2^n)
    {
        printf("{");
        int flag = 0;
        for (int j = 0; j < n; j++) //���������Ƶ�ÿһλ
        {
            if (i & (1 << j))//�ж϶����Ƶ�jλ�Ƿ����    ��λ��&���㣬ͬ1��Ϊ1,1<<j����1�Ķ���������jλ
            {
                if (flag == 1)//����ǵ�һ��Ԫ�ز���Ҫ�򶺺�
                    printf(",");
                printf("%d", j);//������������j��Ԫ��
                flag = 1;
            }
        }
        printf("}\n");
    }
    return 0;
}

