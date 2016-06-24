/*input
4
0 2
1 3
2 12
5 147
4
*/

#include <stdio.h>
#include <math.h>

int main() {
	float D[10], x[10], x1, res, v = 1.0;
	int i, j, n;
	printf("Enter no. of terms:\n");
	scanf("%d", &n);
	printf("Enter x & y values:\n");
	for (i = 0; i < n; i++)
		scanf("%f%f", &x[i], &D[i]);
	printf("Enter point of evaluation:\n");
	scanf("%f", &x1);
	res = D[0];
	for (i = 1; i < n; i++) {
		for (j = 0; j < n-i; j++) {
			D[i] = (D[j] - D[j+1]) / (x[i+j] - x[j+1]);
		}
		v *= (x1 - x[i-1]);
		res += v*D[0];
	}
	printf("Result = %f\n", res);
	return 0;
}