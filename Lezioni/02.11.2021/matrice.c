#include <stdio.h>
#define N 5

void init(int mat[][N], int dimr, int dimc, int n);

void init1(int (*p)[N], int dimr, int dimc, int n);
void init2(int *p, int dimr, int dimc, int n);

int main(void)
{
	int m1[N][N], m2[N][N], m3[N][N];
	int i,j,num;

	scanf("%d", &num);

	init(m1, N, N, num);
	for(i=0;i<N;i++) {
		for(j=0;j<N;j++) {
			printf("%d\t", m1[i][j]);
		}
		printf("\n");
	}
		printf("\n");

	init1(m2, N, N, num);
	for(i=0;i<N;i++) {
		for(j=0;j<N;j++) {
			printf("%d\t", m2[i][j]);
		}
		printf("\n");
	}
		printf("\n");

	init2(&m3[0][0], N, N, num);
	for(i=0;i<N;i++) {
		for(j=0;j<N;j++) {
			printf("%d\t", m3[i][j]);
		}
		printf("\n");
	}

	return 0;
}

void init(int mat[][N], int dimr, int dimc, int n)
{
	int i, j;
	for(i=0;i<dimr;i++) {
		for(j=0;j<dimc;j++) {
			if(i==j)
				mat[i][j]=n;
			else
				mat[i][j]=n+j;
		}
	}
}

void init1(int (*p)[N], int dimr, int dimc, int n)
{
	int i, j;
	for(i=0;i<dimr;i++) {
		for(j=0;j<dimc;j++) {
			if(i==j)
				(*(p+i))[j]=n;
			else
				(*(p+i))[j]=n+j;
		}
	}
}

void init2(int *p, int dimr, int dimc, int n)
{
	int i, j;
	for(i=0;i<dimr;i++) {
		for(j=0;j<dimc;j++) {
			if(i==j)
				*(p+(dimc*i+j))=n;
			else
				*(p+(dimc*i+j))=n+j;
		}
	}
}
