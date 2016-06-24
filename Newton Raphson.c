/*input
1.6 10
*/

#include <stdio.h>
#include <math.h>

float f (float x) { return 3*x - cos(x) - 1; }

float df(float x) { return 3 + sin(x); } 

int main() {
	int i, n;
	float x;
	printf("Enter number of iterations and initial value of root:\n");
	scanf("%d%f", &n, &x);
	for (i = 1; i <= n; i++) {
		x = x - (f(x)/df(x));
	}
	printf("Value = %f\n", x);
	return 0;
}