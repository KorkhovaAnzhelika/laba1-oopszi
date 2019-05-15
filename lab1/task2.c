#include <stdio.h>
#include <math.h> 

double f(double x, double y) {
	return pow( cos(x) - cos(y), 2.0) - pow( sin(x) - sin(y), 2.0);
}

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
