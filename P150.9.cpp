#include<stdio.h>
#include<math.h>
int main()
{
	double x0, x, t;
	int s = 0;
	x0 = 1.5;
	x = 0;
	while (fabs(x - x0) > 1e-8)
	{
		x = x0;
		t = (2 * x * x * x - 4 * x * x + 3 * x - 3) / (6 * x * x - 8 * x + 3);
		x0 = x - t;
		s++;
		printf("%.10lf  迭代了%d次  误差为：%.10lf\n", x0, s, fabs(x - x0));
	}
	return 0;
}