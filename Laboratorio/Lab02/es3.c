#include <stdio.h>
#define DIM 4

int main(void)
{
	int i,j;
	int mat1[DIM][DIM], mat2[DIM][DIM];

	for(i=0;i<DIM;i++) {
		for(j=0;j<DIM;j++) {
			printf("Inserisci riga %d colonna %d matrice 1: ", i+1, j+1);
			scanf("%d", &mat1[i][j]);
		}
	}

	for(i=0;i<DIM;i++) {
		for(j=0;j<DIM;j++) {
			printf("Inserisci riga %d colonna %d matrice 2: ", i+1, j+1);
			scanf("%d", &mat2[i][j]);
		}
	}
	
	printf("\nMatice 1:\n");
	for(i=0;i<DIM;i++) {
		for(j=0;j<DIM;j++) {
			printf("%d\t", mat1[i][j]);
		}
		printf("\n");
	}

	printf("\nMatice 2:\n");
	for(i=0;i<DIM;i++) {
		for(j=0;j<DIM;j++) {
			printf("%d\t", mat2[i][j]);
		}
		printf("\n");
	}
	printf("\nIndici elementi uguali: \n");
	for(i=0;i<DIM;i++) {
		for(j=0;j<DIM;j++) {
			if(mat1[i][j]==mat2[i][j]) {
				printf("(%d,%d)\n", i, j);
			}
		}
	}

	return 0;
}
