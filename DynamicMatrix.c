#include <stdio.h>
#include <stdlib.h>

int main() {
	int m;
	int n;
	scanf("%d", &n);
	scanf("%d", &m);

	int **mat = (int **) malloc(n * sizeof(int *));
	for (int i = 0; i < n; i++) {
		mat[i] = (int *) malloc(m * sizeof(int));
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", *(mat + i) + j);
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", *(*(mat + i) + j));
		}
		printf("\n");
	}

	int suma = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i < j) {
				suma += *(*(mat + i) + j);
			}
		}
	}

	printf("Suma este: %d", suma);
	return 0;
}