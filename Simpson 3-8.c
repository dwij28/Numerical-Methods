/*input
0 6 6
*/

#include <stdio.h>
#include <math.h>

float f (float x) { return 1 / (1 + x*x) ; }

int main() {
	int i, n;
	float a, b, h, s, multiple3 = 0, others = 0;
	printf("Enter values of lower limit, upper limit and no. of intervals:\n");
	scanf("%f%f%d", &a, &b, &n);
	h = (b-a)/n;
	if (n % 3 != 0) printf("Simpson's 3/8 Rule is not applicable.\n");
	else {
		for (i = 1; i <= n-1; i++) {
			if (i % 3 == 0) multiple3 += f(a + i*h);
			else others += f(a + i*h);
		}
		s = (3 * h / 8) * (f(a) + f(b) + 3*others + 2*multiple3);
		printf("Integral = %f\n", s);
	}
	return 0;
}