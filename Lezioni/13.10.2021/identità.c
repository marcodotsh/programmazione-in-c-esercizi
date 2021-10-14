#include <stdio.h>
#define N 3

int main(void)
{
	int mat[N][N], i, j, id;
	id = 1;

	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("Inserisci elemento di riga %d e colonna %d: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<N && id;i++)
	{
		for(j=0;j<N && id;j++)
		{
			if((i == j && mat[i][j]!=1) ||(i!=j && mat[i][j]!=0))
			{
				id = 0;
			}
		}
	}
	if(id)
	{
		printf("La matrice è identità!\n");
	}else
	{
		printf("La matrice non è identità :((\n");
	}

	return 0;
}
