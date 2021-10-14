#include <stdio.h>
#define NR 2
#define NC 3

int main(void)
{
	int mat[NR][NC], i, j, riga, colonna;

	for(i=0;i<NR;i++)
	{
		for(j=0;j<NC;j++)
		{
			printf("Inserisci elemento di riga %d e colonna %d: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}

	for(i=0;i<NR;i++)
	{
		for(j=0;j<NC;j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}

	printf("Inserisci indice riga da azzerare: ");
	scanf("%d", &riga);
	for(j=0;j<NC;j++)
	{
		mat[riga][j] = 0;
	}
	
	printf("Inserisci indice colonna da porre uguale a 1: ");
	scanf("%d", &colonna);
	for(i=0;i<NR;i++)
	{
		mat[i][colonna] = 1;
	}
	for(i=0;i<NR;i++)
	{
		for(j=0;j<NC;j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}

	return 0;
}
