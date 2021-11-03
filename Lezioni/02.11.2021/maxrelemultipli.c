#include <stdio.h>
#define DIM 4

void analizza(int mat[][DIM], int dimr, int dimc, int m, int *maxr, int *nmult);

int main(void)
{
	int m[DIM][DIM], i, j, mx, maxr, nmult;
	for(i=0;i<DIM;i++) {
		for(j=0;j<DIM;j++) {
			do {
				printf("Inserisci intero positivo riga %d colonna %d: ", i+1, j+1);
				scanf("%d", &m[i][j]);
			}while(m[i][j]<=0);
		}
	}
	printf("Inserisci m: ");
	scanf("%d", &mx);
	printf("\n");

	analizza(m, DIM, DIM, mx, &maxr, &nmult);

	printf("%d %d\n", maxr, nmult);

	return 0;
}

void analizza(int mat[][DIM], int dimr, int dimc, int m, int *maxr, int *nmult)
{
	int i,j;
	*maxr = -1;
	*nmult = 0;
	for(i=0;i<dimr;i++) {
		for(j=0;j<dimc;j++) {
			if(mat[i][j]%m==0)
				(*nmult)++;
			if(mat[i][j]<=m && mat[i][j]>*maxr)
				*maxr=mat[i][j];
		}
	}
}

