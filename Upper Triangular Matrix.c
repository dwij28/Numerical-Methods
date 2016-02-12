#include <stdio.h>
#define n 3 // size of the square matrix (n X n)
float matrix[n][n];
float t;
int main() {
	int i, j, k;
	printf("Enter the elements of the matrix:\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%f", &matrix[i][j]);
		}
	}
	printf("\n\nThe matrix is:\n\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%.2f\t", matrix[i][j]);
		}
		printf("\n");
	}
	for (i = 1; i < n; i++) {
		for (j = 0; j < i; j++) {
			t = matrix[i][j] / matrix[j][j];
			for (k = 0; k < n; k++) {
				matrix[i][k] = matrix[i][k]-t*matrix[j][k];
			}
		}
	}
	printf("\n\n");
	printf("The corresponding upper triangular matrix is:\n\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%.2f\t", matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
