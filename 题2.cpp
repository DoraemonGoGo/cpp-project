//�г����д�����1������n��������Ȼ�������У����������������������п��Գ����ظ������֣�1<=n<=7��
//�ݹ�

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int a[10], n;
bool b[10];
void init()
{
	cin >> n;
	memset(a, 0, sizeof(a));
	memset(b, 1, sizeof(b));
}
void dfs(int dep)
{
	if (dep > n)
	{
		for (int i = 1; i <= n; i++)
			cout << a[i] << ' ';
		cout << endl;
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (b[i] == 1)
		{
			b[i] = 0;
			a[dep] = i;
			dfs(dep + 1);
			b[i] = 1;
		}
	}
}
void work()
{
	dfs(1);
}
int main()
{
	init();
	work();
	return 0;
}