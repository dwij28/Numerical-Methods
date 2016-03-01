#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x) { return x*x - 81; }

int main() {
	int i, n;
	float a, b, c, root;
	printf("Enter Lower Limit: ");
	scanf("%f", &a);
	printf("Enter Upper Limit: ");
	scanf("%f", &b);
	printf("Enter Number of Iterations: ");
	scanf("%d", &n);
	if (! f(a)) printf("Root = %f\n", a);
	else if (! f(b)) printf("Root = %f\n", b);
	else {
		for (i = 1; i <= n; i++) {
			c = (a+b)/2;
			if (! f(c)) {
				printf("Root = %f\n", c);
				exit(0);
			}
			else if (f(a)*f(c) < 0) { b = c; }
			else if (f(b)*f(c) < 0) { a = c; }
		}
		printf("Approximate root = %f\n", c);
	}
	return 0;
}