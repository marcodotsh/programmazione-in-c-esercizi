#include <stdio.h>
#define N 3

int main(void)
{
	int mat[N][N], i, j, temp;

	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("Inserisci elemento riga %d colonna %d: ", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("\nMatrice:\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<N/2;i++)
	{
		for(j=i;j<N-1-i;j++)
		{
			temp = mat[i][j];

			mat[i][j] = mat[j][N-1-i];
			mat[j][N-1-i] = mat[N-1-i][N-1-j];
			mat[N-1-i][N-1-j] = mat[N-1-j][i];
			mat[N-1-j][i] = temp;
		}
	}

	printf("\nMatrice ruotata:\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
