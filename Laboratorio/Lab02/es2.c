#include <stdio.h>
#define N 100

typedef struct
{
	int righe;
	int colonne;
	int val[N][N];
} matrice_t;

int main(void)
{
	int i,j;
	matrice_t a, at;
	
	do {
		printf("Inserisci numero righe matrice A: ");
		scanf("%d", &a.righe);
	}while(a.righe<=0||a.righe>100);
	
	do {
		printf("Inserisci numero colonne matrice A: ");
		scanf("%d", &a.colonne);
	}while(a.colonne<=0||a.colonne>100);

	for(i=0;i<a.righe;i++) {
		for(j=0;j<a.colonne;j++) {
			printf("Inserisci elemento riga %d colonna %d: ", i+1, j+1);
			scanf("%d", &a.val[i][j]);
		}
	}
	
	at.righe = a.colonne;
	at.colonne = a.righe;

	for(i=0;i<a.righe;i++) {
		for(j=0;j<a.colonne;j++) {
			at.val[j][i] = a.val[i][j];
		}
	}

	printf("\nA trasposta:\n");
	for(i=0;i<at.righe;i++) {
		for(j=0;j<at.colonne;j++) {
			printf("%d\t", at.val[i][j]);
		}
		printf("\n");
	}

	return 0;
}
