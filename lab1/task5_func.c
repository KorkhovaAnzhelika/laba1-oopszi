#include <math.h> 

double f(double x, double y) {
	return pow(cos(x) - cos(y), 2.0) - pow(sin(x) - sin(y), 2.0);
}
