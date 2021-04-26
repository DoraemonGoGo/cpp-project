#include<stdio.h>
#include<math.h>
int main()
{
	double x0, x, t;
	int s = 0;
	x0 = 2;
	x = 0;
	while (fabs(x-x0)>1e-5)
	{
		x = x0;
		t = (exp(x) - x - 3) / (exp(x) - 1);
		x0 = x - t;
		s++;
		printf("%.10lf  迭代了%d次  误差为：%.10lf\n", x0, s, fabs(x-x0));
	}
	return 0;
}