#include<stdio.h>
#include<stdlib.h>
struct grade
{
	int num;
	char name[20];
	int disscore;
	int repscore;
	int testscore;
	int totscore;
	struct grade* next;
};
typedef struct grade* pgrade;
pgrade head = NULL;
int main()
{
	FILE* fpin = fopen("E:\\×ÀÃæ\\2018Exp.txt", "r");
	pgrade p;
	while (!feof(fpin))
	{
		p = (pgrade)malloc(sizeof(struct grade));
		fscanf(fpin, "%d", &p->num); dec
			fscanf(fpin, "%s", p->name);
		fscanf(fpin, "%d", &p->disscore);
		fscanf(fpin, "%d", &p->repscore);
		fscanf(fpin, "%d", &p->testscore);
		printf("%d %s %d", p->num, p->name, p->disscore);
		printf("\n");
		p->totscore = (int)(0.2 * p->disscore + 0.2 * p->repscore + 0.6 * p->testscore);
		p->next = NULL;
		if (head == NULL)
			head = p;
		else
		{
			pgrade p1 = head, p2 = NULL;
			if (p1->totscore < p->totscore)
			{
				p->next = head;
				head = p;
			}
			else
			{
				while (p1 != NULL && p1->totscore >= p->totscore)
				{
					p2 = p1;
					p1 = p1->next;
				}
				if (p1 == NULL)
					p2->next = p;
				else
				{
					p2->next = p;
					p->next = p1;
				}
			}
		}
	}
	/*pgrade head = p;
	while (head != NULL)
	{
		printf("%d %s %d %d %d", head->num, head->name, head->disscore, head->repscore, head->testscore);
		head = head->next;
	}*/
	fclose(fpin);
	return 0;
}