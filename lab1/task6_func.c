#include <math.h>

double x = 0, y = 0, result = 0;

void f(void) {
	result = pow(cos(x) - cos(y), 2.0) - pow(sin(x) - sin(y), 2.0);
}
