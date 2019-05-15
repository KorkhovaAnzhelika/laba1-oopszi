#include <stdio.h>

extern double x, y, result;

int main()
{
	x = 3.0;
	y = 4.0;
	printf("x = %.3lf\n", x);
	printf("y = %.3lf\n", y);
	f();
	printf("f = %.3lf\n", result);

	printf("Enter X: "); scanf_s("%lf", &x);
	printf("Enter Y: "); scanf_s("%lf", &y);

	f();
	printf("f = %.3lf\n", result);
	return 0;
}
