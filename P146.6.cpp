#include<stdio.h>
#include<math.h>
#include<malloc.h>
int x[100], y[100], r[100];
typedef struct circle
{
	double x, y, r;
}Circle;
typedef struct node
{
	int m, n;
	struct node* next;
}Node;
double Distance(Circle i, Circle j)
{
	return sqrt(pow((i.x - j.x), 2) + pow((i.y - j.y), 2));
}
Node* fun(int n, Circle* c)
{
	Node* head;
	head = (Node*)malloc(sizeof(Node));
	if (head != NULL)
		head->next = NULL;
	Node* p;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Distance(c[i], c[j]) == c[i].r + c[j].r || Distance(c[i], c[j]) == c[i].r - c[j].r)
			{
				p = (Node*)malloc(sizeof(Node));
				if (p != NULL)
				{
					p->m = i + 1;
					p->n = j + 1;
					p->next = head->next;
					head->next = p;
				}
			}
		}
	}
	return head;
}
void show(Node* L)
{
	Node* p;
	p = L->next;
	while (p)
	{
		printf("%d %d", p->m, p->n);
		p = p->next;
		printf("\n");
	}
}
int main()
{
	int n;
	printf("请输入一共有多少个圆：\n");
	scanf_s("%d", &n);
	Circle c[10];
	printf("请输入每一个圆:\n");
	for (int i = 0; i < n; i++)
		scanf_s("%lf%lf%lf", &c[i].x, &c[i].y, &c[i].r);
	Node* L = fun(n, c);
	printf("相切圆的序号分别为：\n");
	show(L);
	return 0;
}