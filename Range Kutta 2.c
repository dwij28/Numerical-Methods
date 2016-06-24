/*input
0 1 0.1 0.4
*/

#include <stdio.h>
#include <math.h>

float f (float x, float y) {  return x-y; }

int main() {
	float x, y, h, eval, k1, k2;
	printf("Enter values of x0, y0, h and point of evaluation:\n");
	scanf("%f%f%f%f", &x, &y, &h, &eval);
	while (x < eval) {
		k1 = h*f(x, y);
		k2 = h*f(x+h, y+k1);
		y += 0.5 * (k1 + k2);
		x += h;
	}
	printf("Answer = %f\n", y);
	return 0;
}