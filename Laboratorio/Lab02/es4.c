#include <stdio.h>
#define DIM 4

typedef int matrice_t[DIM][DIM];

int main(void)
{
	int i, j;
	matrice_t mat, ris;
	for(i=0;i<DIM;i++) {
		for(j=0;j<DIM;j++) {
			printf("Inserisci elemento riga %d colonna %d: ", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("\nPrima:\n");
	for(i=0;i<DIM;i++) {
		for(j=0;j<DIM;j++) {
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<DIM;i++) {
		for(j=0;j<DIM;j++) {
			if(mat[i][j]>mat[(i+1)%DIM][j]&&mat[i][j]>mat[(!i*DIM)+i-1][j]&&mat[i][j]>mat[i][(j+1)%DIM]&&mat[i][j]>mat[i][(!j*DIM)+j-1]) {
				ris[i][j] = 0;
			}
			else {
				ris[i][j] = mat[i][j];
			}
		}
	}
	
	printf("\nDopo: \n");
	for(i=0;i<DIM;i++) {
		for(j=0;j<DIM;j++) {
			printf("%d\t", ris[i][j]);
		}
		printf("\n");
	}


	return 0;
}
