#include <stdio.h>
#define n 3 // number of unknowns in the system of equations

int main() {
	float aug[n][n+1], a[n][n], b[n], x[n], t; // augmented matrix, array of rhs values of all equations, original matrix, solution array, temporary variable
	int i, j, k;
	printf("Enter the elements of the coefficient matrix:\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			scanf("%f", &a[i][j]);
	}
	printf("Enter rhs values of all the equations:\n");
	for (i = 0; i < n; i++) scanf("%f", &b[i]);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			aug[i][j] = a[i][j];
		aug[i][n] = b[i];
	}
	for (i = 1; i < n; i++) {
		for (j = 0; j < i; j++) {
			t = aug[i][j] / aug[j][j];
			for (k = 0; k <= n; k++)
				aug[i][k] -= t*aug[j][k];
		}
	}
	for (i = n-1; i >= 0; i--) {
		x[i] = b[i];
		for (j = i+1; j <= n-1; j++)
			x[i] -= x[j]*aug[i][j];
		x[i] /= aug[i][i];
	}
	printf("The solution array is:\n");
	for (i = 0; i < n; i++) {
		printf("%f ", x[i]);
	}
	return 0;
}
