/*input
0 1
*/
#include <stdio.h>
#include <math.h>

float f(float x) { return 3*x - cos(x) - 1; }

int main() {
	float a, b, c, temp;
	printf("Enter values of a and b:\n");
	scanf("%f%f", &a, &b);
	temp = 100.0; // huge value
	while (1) {
		c = (a * f(b) - b * f(a)) / (f(b) - f(a));
		if (f(c) > 0) b = c;
		else a = c;
		if (abs(temp - f(c)) < 0.0001) break;
		temp = f(c);
	}
	printf("%f\n", c);
	return 0;
}