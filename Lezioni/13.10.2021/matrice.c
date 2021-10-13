#include <stdio.h>
#define NR 2
#define NC 3

int main(void)
{
	int mat[NR][NC], i, j;

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
	
	return 0;
}
