/*input
2 2 0.05 2.1
*/

#include <stdio.h>
#include <math.h>

float f(float x, float y) { return 1 - (y / x); }

int main() {
	int i;
	float x[100], y[100], h, eval, diff, temp;
	printf("Enter x0, y0, step size(h) and point of evaluation:\n");
	scanf("%f%f%f%f", &x[0], &y[0], &h, &eval);
	for (i = 1; x[i-1] < eval; i++) {
		x[i] = x[i-1] + h;
		y[i] = y[i-1] + h*f(x[i-1], y[i-1]);
		diff = 100.0; // huge value;
		temp = y[i];
		while (diff > 0.0001) {
			temp = y[i-1] + h * (f(x[i-1], y[i-1]) + f(x[i], y[i])) / 2;
			diff = temp - y[i];
			y[i] = temp;
		}
	}
	printf("Result = %f\n", y[i-1]);
	return 0;
}