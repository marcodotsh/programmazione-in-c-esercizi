#include <stdio.h>

#define M 4
#define N 3

int elaboraMat(int Mat[][N], int New[][N], int m, int n)
{
	int nazzerate, i, j;
	
	nazzerate = 0;

	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			if(Mat[i][0] == 0) {
				New[m-1-i][j] = 0;
				nazzerate++;
			}
			else {
				New[m-1-i][j] = Mat[i][j];
			}
		}
	}

	nazzerate /= n;

	return nazzerate;
}

int main(void)
{
	int Mat[M][N], New[M][N], i, j, nz;

	for(i=0;i<M;i++) {
		for(j=0;j<N;j++) {
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%d", &Mat[i][j]);
		}
	}

	nz = elaboraMat(Mat, New, M, N);

	for(i=0;i<M;i++) {
		for(j=0;j<N;j++) {
			printf("%d ", New[i][j]);
		}
		printf("\n");
	}

	printf("Numero righe azzerate: %d\n", nz);

	return 0;
}

