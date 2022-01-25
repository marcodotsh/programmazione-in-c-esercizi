#include <stdio.h>

#define N 100
#define DIM 3

void elaboraMat(int a[][N], int b[][N], int ko[DIM][DIM], int nr, int nc);

int main(void)
{
	int a[N][N], b[N][N], k[DIM][DIM];
	int i, j, nrig, ncol;

	do {
		printf("Inserire numero righe: ");
		scanf("%d", &nrig);
	} while(nrig<=0||nrig>100);

	do {
		printf("Inserire numero colonne: ");
		scanf("%d", &ncol);
	} while(ncol<=0||ncol>100);

	printf("Matrice A:\n");
	for(i=0;i<nrig;i++) {
		for(j=0;j<ncol;j++) {
			printf("a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Matrice K:\n");
	for(i=0;i<DIM;i++) {
		for(j=0;j<DIM;j++) {
			printf("k[%d][%d]: ", i, j);
			scanf("%d", &k[i][j]);
		}
	}

	elaboraMat(a, b, k, nrig, ncol);

	printf("Matrice A:\n");
	for(i=0;i<nrig;i++) {
		for(j=0;j<ncol;j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	printf("Matrice B:\n");
	for(i=0;i<nrig;i++) {
		for(j=0;j<ncol;j++) {
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

void elaboraMat(int a[][N], int b[][N], int ko[DIM][DIM], int nr, int nc)
{
	int i, j, k, l;

	for(i=0;i<nr;i++) {
		for(j=0;j<nc;j++) {
			b[i][j] = 0;
			for(k=0;k<DIM;k++) {
				for(l=0;l<DIM;l++) {
					b[i][j] += a[(i+k-1)*(i+k-1>=0&&i+k-1<nr) + (nr-1)*(i+k-1==nr)][(j+l-1)*(j+l-1>=0&&j+l-1<nc) + (nc-1)*(j+l-1==nc)]*ko[k][l];
				}
			}			
		}
	}

	return;
}
