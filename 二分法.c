#include<stdio.h>
#include<math.h>
int Iszreo(double x)
{
	if (x * x * x + 10 * x - 20 > 0)
		return 1;
	else
		return 0;
}
int main()
{
	double a = 1, b = 2;
	double x;
	while (fabs(a -b )>1e-5)
	{
		x = (a + b) / 2;
		if (Iszreo(x))
			b = x;
		else
			a = x;
		printf("%.9lf  Îó²îÎª£º%.9lf\n", x, fabs(a - b));
	}
	return 0;
}