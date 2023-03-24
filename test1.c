
#include <stdio.h>
#include <math.h>

double areaTriangle(double a, double b, double c) {
	double Perim;
	Perim = (a + b + c)/2;
	return sqrt(Perim*(Perim - a)*(Perim - b)*(Perim - c));
}

double sideTriangle(double x1, double y1, double x2, double y2) {
	return sqrt((x2 - x1)*(x2 - x1)+(y2 - y1)*(y2 - y1));
}	
int main() {
	double a;
	double b;
	double c;
	double s;
	a = sideTriangle(3.0, 3.0, 7.0, 7.0);
	b = sideTriangle(7.0, 7.0, 10.0, 2.0);
	c = sideTriangle(3.0, 3.0, 10.0, 2.0);
	s = areaTriangle(a, b, c);
	printf("Area of Triangle s: %6.2lf\n", s);
	return 0;
}
