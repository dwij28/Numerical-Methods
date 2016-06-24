/*input
0 1
*/

#include <stdio.h>
#include <math.h>

float f (float x) { return 4*x - 3*x*x; }

int main() {
	int i, n;
	float a, b, h, s;
	printf("Enter values of lower limit, upper limit and no. of intervals:\n");
	scanf("%f%f%d", &a, &b, &n);
	h = (b-a)/n;
	s = f(a) + f(b);
	for (i = 1; i < n; i++)
		s += 2*f(a + i*h);
	printf("Integral = %f\n", h*s/2);
	return 0;
}