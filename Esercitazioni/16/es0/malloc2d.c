#include <stdio.h>
#include <stdlib.h>

float **malloc2d(int nr, int nc);

void stampa_matrice(float **m, int nr, int nc);

int main(void)
{
	int nr, nc, i;
	float **m;
	printf("Inserire nr nc: ");
	scanf("%d%d", &nr, &nc);
	
	m = malloc2d(nr, nc);
	if(m) {
		stampa_matrice(m, nr, nc);
		for(i=0;i<nr;i++) {
			free(m[i]);
		}
		free(m);
		m = NULL;
	}

	return 0;
}

float **malloc2d(int nr, int nc)
{
	float **m;
	int i, j;

	m = (float **) malloc(sizeof(float * ) * nr);
	if(m) {
		for(i=0;i<nr;i++) {
			m[i] = (float *) malloc(sizeof(float) * nc);
			if(m[i]) {
				for(j=0;j<nc;j++) {
					m[i][j] = 0.0;
				}
			}
		}
	}

	return m;
}

void stampa_matrice(float **m, int nr, int nc)
{
	int i,j;
	printf("\n");

	for(i=0;i<nr;i++) {
		for(j=0;j<nc;j++) {
			printf("%f ", m[i][j]);
		}
		printf("\n");
	}
}
