/*input
0 0 0.05 0.15
*/

#include <stdio.h>
#include <math.h>

float f(float x, float y) { return x*x + y*y; }

int main() {
	float x, y, h, eval;
	printf("Enter x0, y0, step size(h) and point of evaluation:\n");
	scanf("%f%f%f%f", &x, &y, &h, &eval);
	while (x < eval) {
		y = y + h*f(x, y);
		x += h;
	}
	printf("Result = %.4f\n", y);
	return 0;
}