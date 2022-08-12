#include<stdio.h>
int main()
{
	/*double S = 0;
	int i = 3;
	S = 1.0 * 2.0 + 1.0 / 3 * 4.0 / 3.0;
	while (S - (int)S > 1e-8)
	{
		S += (1.0 / (2.0 * i - 1)) * ((2.0 * i) / (2.0 * i - 1));
		i++;
	}
	printf("%llf", S);*/
	int n;
	double term = 1, s = 0.0;
	for (n = 1; term > 1e-8; n++)
	{
		term = (1.0 / (2.0 * n - 1)) * ((2.0 * n) / (2.0 * n - 1));
		s += term;
	}
	printf("%llf", s);
	return 0;
}