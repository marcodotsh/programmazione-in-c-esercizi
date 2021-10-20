#include <stdio.h>
#define DIM 5

int main(void)
{
	char mat[DIM][DIM], maxc;
	int i, j, k, h, maxf, freq;

	for(i=0;i<DIM;i++)
	{
		for(j=0;j<DIM;j++)
		{
			scanf(" %c", &mat[i][j]);
		}
	}
	
	maxc = mat[0][0];
	maxf = 0;
	for(i=0;i<DIM;i++)
	{
		for(j=0;j<DIM;j++)
		{
			freq = 0;
			for(h=0;h<DIM; h++)
			{
				for(k=0; k<DIM;k++)
				{
					if(mat[i][j] == mat[h][k])
					{
						freq++;
					}
				}
			}
			if(freq>maxf)
			{
				maxf = freq;
				maxc = mat[i][j];
			}
		}
	}

	printf("Il carattere piu' frequente è %c\n", maxc);

	for(i=0;i<DIM;i++)
	{
		for(j=0;j<DIM;j++)
		{
			if(mat[i][j] == maxc)
			{
				printf("* ");
			}else
			{
				printf("%c ", mat[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}
