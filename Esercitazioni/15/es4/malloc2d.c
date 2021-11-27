#include <stdio.h>
#include <stdlib.h>

int *malloc2d(int r, int c);

int main(void) {
	int rig, col, *mat, i, j;
	
	printf("Inserisci numero righe: ");
	scanf("%d", &rig);
	printf("Inserisci numero colonne: ");
	scanf("%d", &col);

	mat = malloc2d(rig, col);
	if(mat) {
		for(i=0;i<rig;i++) {
			for(j=0;j<col;j++) {
				printf("%d\t", *(mat+i*col+j));	
			}
			printf("\n");
		}
		free(mat);
	}
	else
		printf("Errore allocazione memoria\n");
 
	return 0;
}

int *malloc2d(int r, int c)
{
	int *p, i, j;
	p = malloc(sizeof(int)*r*c);
	if(p) {
		for(i=0;i<r;i++) {
			for(j=0;j<c;j++) {
				*(p+i*c+j) = 0;
			}
		}
	}

	return p;
}
