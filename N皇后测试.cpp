# include <stdio.h>

// 全局变量
int place[8] = { 0 };	// 保存皇后的位置，下标为行，储存的数据为列。
bool flag[8] = { 1, 1, 1, 1, 1, 1, 1, 1 };	// 用来保存哪一列已经存在皇后
bool d1[15] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };	// 从左上到右下的对角线为上对角线，每条上对角线上的行和列的差是一样的。
bool d2[15] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };	// 从左下到右下的对角线为下对角线，每条下对角线上的行和列的和是一样的。
int key = 0;					// 统计解的数量

// 函数声明
void QueenVIII(int);			// 八皇后问题
void output(void);				// 输出

// 主函数
int main(void)
{
	//output();
	QueenVIII(0);

	return 1;
}
void QueenVIII(int n)
{
	for (int i = 0; i < 8; ++i)	// 计算第n行皇后的位置
	{
		if ((flag[i] && d1[n - i + 7]) && d2[n + i])	// 判断第n行第i列的位置是否危险
		{
			place[n] = i;		// 记录皇后的位置
			flag[i] = 0;		// 记录第i列已经有皇后了
			d1[n - i + 7] = 0;	// 记录这条上对角线是危险的
			d2[n + i] = 0;		// 记录这条下对角线是危险的

			if (n < 7)			// 判断八个皇后放完了没有
			{
				QueenVIII(n + 1);
			}
			else
			{
				output();		//输出
			}
			// 回溯
			flag[i] = 1;
			d1[n - i + 7] = 1;
			d2[n + i] = 1;
		}
	}
}
void output(void)
{
	printf("第%d种解法：\n", ++key);
	for (int i = 0; i < 8; ++i)
	{
		for (int l = 0; l < 8; ++l)
		{
			if (place[i] == l)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
	printf("\n");
}