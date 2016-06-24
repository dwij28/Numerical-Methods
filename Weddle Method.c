/*input
0 2 12
*/

#include <stdio.h>
#include <math.h>

float f (float x) { return 1 / (1 + x*x) ; }

int main() {
	int i, n, m;
	float a, b, h, s = 0;
	printf("Enter values of lower limit, upper limit and no. of intervals:\n");
	scanf("%f%f%d", &a, &b, &n);
	h = (b-a)/n;
	if (n % 6 != 0) printf("Weddle's Rule is not applicable.\n");
	else {
		m = n/6;
		for (i = 1; i <= m; i++) {
			s += 3*(h/10)*(f(a) + 5*f(a + h) + f(a + 2*h) + 6*f(a + 3*h) + f(a + 4*h) + 5*f(a + 5*h) + f(a + 6*h));
			a += 6*h;
		}
		printf("Integral = %f\n", s);
	}
	return 0;
}