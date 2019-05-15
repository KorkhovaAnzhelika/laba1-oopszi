#include <stdio.h> 
#include <math.h> 

double x = 0, y = 0, result = 0;

void f(void) {
	result = pow(cos(x) - cos(y), 2.0) - pow(sin(x) - sin(y), 2.0);
}

int main()
{
	x = 3.0;
	y = 4.0;
	printf("x = %.3lf\n", x);
	printf("y = %.3lf\n", y);
	f();
	printf("f = %.3lf\n", result);

	printf("Enter X: "); scanf_s("%f", &x);
	printf("Enter Y: "); scanf_s("%f", &y);

	f();
	printf("f = %.3lf\n", result);
	return 0;
}
