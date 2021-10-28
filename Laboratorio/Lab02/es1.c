#include <stdio.h>
#define DIM 4

int main(void)
{
	float mat[DIM][DIM];
	int i,j;

	for(i=0;i<DIM;i++) {
		for(j=0;j<DIM;j++) {
			printf("Inserisci elemento riga %d colonna %d: ", i+1, j+1);
			scanf("%f", &mat[i][j]);
		}
	}
	
	for(i=0;i<DIM;i++) {
		printf("%.2f\n", mat[i][i]);
	}

	return 0;
}
