#include <stdio.h>
#define N 3

int main(void)
{
	int mat[N][N], i, j, temp1, temp2, temp3, temp4;

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
			temp1 = mat[i][j];
			temp2 = mat[N-1-j][i];
			temp3 = mat[N-1-i][N-1-j];
			temp4 = mat[j][N-1-i];

			mat[i][j] = temp4;
			mat[N-1-j][i] = temp1;
			mat[N-1-i][N-1-j] = temp2;
			mat[j][N-1-i] = temp3;
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
