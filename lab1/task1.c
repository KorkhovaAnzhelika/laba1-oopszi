#include <stdio.h>
#include <math.h> 

int main()
{
	float x, y;
	x = 3.0;
	y = 4.0;
	printf("x = %.3lf\n", x);
	printf("y = %.3lf\n", y);
	printf("f = %.3lf\n", pow(cos(x) - cos(y), 2.0) - pow(sin(x) - sin(y), 2.0) );

	printf("Enter X: "); scanf_s("%f", &x);
	printf("Enter Y: "); scanf_s("%f", &y);

	printf("f = %.3lf\n", pow(cos(x) - cos(y), 2.0) - pow(sin(x) - sin(y), 2.0) );
	return 0;
}
