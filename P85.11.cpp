#include<stdio.h>
void print_arr(int array[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", array[i]);
}
void move(int array[], int n, int offset)
{
	int* p, * array_end;
	array_end = array + n;
	int last;
	while (offset)
	{
		last = *(array_end - 1);
		for (p = array_end - 1; p != array; --p)
			*p = *(p - 1);
		*array = last;
		--offset;
	}
}
int main()
{
	int array[30];
	int i, n, offset;
	printf("Total numbers:\n");
	scanf_s("%d", &n);
	printf("Input %d numbers:\n", n);
	for (i = 0; i < n; i++)
		scanf_s("%d", &array[i]);
	printf("Set your offset:\n");
	scanf_s("%d", &offset);
	//print_arr(array, n);
	move(array, n, offset);
	print_arr(array, n);
	return 0;
}