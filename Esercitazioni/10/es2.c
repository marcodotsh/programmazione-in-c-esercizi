#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3
#define MAX_INCR 2

void genera_matrice(int m[][N], int nr, int nc, int incr);

void stampa_matrice(int m[][N], int nr, int nc);

void trasf_matrice(int m[][N], int nr, int nc);

int main(void)
{
	int mat[N][N];

	genera_matrice(mat, N, N, MAX_INCR);

	stampa_matrice(mat, N, N);

	trasf_matrice(mat, N, N);

	stampa_matrice(mat, N, N);

	return 0;
}

void genera_matrice(int m[][N], int nr, int nc, int incr)
{
	int i, j, prec;
	srand(time(NULL));
	prec = 0;
	
	for(i=0;i<nr;i++) {
		for(j=0;j<nc;j++) {
			m[i][j] = prec + (rand() % MAX_INCR +1);
			prec = m[i][j];
		}
	}
}

void stampa_matrice(int m[][N], int nr, int nc)
{
	int i, j;
	for(i=0;i<nr;i++) {
		for(j=0;j<nc;j++) {
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void trasf_matrice(int m[][N], int nr, int nc)
{
	int i, j;
	for(i=0;i<nr;i++) {
		for(j=i+1;j<nc;j++) {
			m[i][j] = m[i][j] + m[j][i];
			m[j][i] = 0;
		}
	}
}
