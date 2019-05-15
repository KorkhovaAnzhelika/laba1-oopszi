#include <stdio.h> 

double f(double x, double y);

int main()
{
	float x, y;
	x = 3.0;
	y = 4.0;
	printf("x = %.3lf\n", x);
	printf("y = %.3lf\n", y);
	printf("f = %.3lf\n", f(x, y));

	printf("Enter X: "); scanf_s("%f", &x);
	printf("Enter Y: "); scanf_s("%f", &y);

	printf("f = %.3lf\n", f(x, y));
	return 0;
}
