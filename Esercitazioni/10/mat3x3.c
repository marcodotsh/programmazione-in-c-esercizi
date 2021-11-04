#include <stdio.h>
#define DIM 3

void riempi_matrice(int m[][DIM], int nr, int nc);

void stampa_matrice(int m[][DIM], int nr, int nc);

void dispari_cubi(int m[][DIM], int nr, int nc);

float calcola_media(int m[][DIM], int nr, int nc);

int main(void)
{
	int mat[DIM][DIM];
	float media;

	riempi_matrice(mat, DIM, DIM);
	
	stampa_matrice(mat, DIM, DIM);

	media = calcola_media(mat, DIM, DIM);
	
	printf("Media: %f\n\n", media);
	
	dispari_cubi(mat, DIM, DIM);

	stampa_matrice(mat, DIM, DIM);
	
	media = calcola_media(mat, DIM, DIM);

	printf("Media: %f\n\n", media);

	return 0;
}

void riempi_matrice(int m[][DIM], int nr, int nc)
{
	int i, j;
	for(i=0;i<nr;i++) {
		for(j=0;j<nc;j++) {
			printf("Inserisci elemento riga %d colonna %d: ", i+1, j+1);
			scanf("%d", &m[i][j]);
		}
	}
}

void stampa_matrice(int m[][DIM], int nr, int nc)
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

void dispari_cubi(int m[][DIM], int nr, int nc)
{
	int i, j;
	for(i=0;i<nr;i++) {
		for(j=0;j<nc;j++) {
			if(m[i][j]%2==1) {
				m[i][j] = m[i][j] * m[i][j] * m[i][j];
			}
		}
	}
}

float calcola_media(int m[][DIM], int nr, int nc)
{
	int i, j;
	float ris;
	ris = 0;
	for(i=0;i<nr;i++) {
		for(j=0;j<nc;j++) {
			ris = ris + m[i][j];
		}
	}
	ris = ris / (i*j);

	return ris;
}
