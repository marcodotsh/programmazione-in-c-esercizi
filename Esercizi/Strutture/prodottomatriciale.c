#include <stdio.h>
#define DIM 5

typedef struct
{
	int righe;
	int colonne;
	int val[DIM][DIM];
} matrice_t;

void stampamat(matrice_t);

int main(void)
{
	int i, j, k;
	matrice_t mat1, mat2, ris;
	do
	{
		printf("Inserire dimensioni mat1 (righe colonne): ");
		scanf("%d%d", &mat1.righe, &mat1.colonne);
	}while(mat1.righe<=0 || mat1.righe>DIM || mat1.colonne<=0 || mat1.colonne>DIM);

	for(i=0;i<mat1.righe;i++)
	{
		for(j=0;j<mat1.colonne;j++)
		{
			printf("Inserire elemento riga %d colonna %d: ", i+1, j+1);
			scanf("%d", &mat1.val[i][j]);
		}
	}

	do
	{
		printf("Inserire dimensioni mat2 (righe colonne): ");
		scanf("%d%d", &mat2.righe, &mat2.colonne);
	}while(mat2.righe<=0 || mat2.righe>DIM || mat2.colonne<=0 || mat2.colonne>DIM);

	for(i=0;i<mat2.righe;i++)
	{
		for(j=0;j<mat2.colonne;j++)
		{
			printf("Inserire elemento riga %d colonna %d: ", i+1, j+1);
			scanf("%d", &mat2.val[i][j]);
		}
	}
	
	printf("\nMatrice 1:\n");
	stampamat(mat1);

	printf("\nMatrice 2:\n");
	stampamat(mat2);

	if(mat1.colonne==mat2.righe)
	{
		ris.righe = mat1.righe;
		ris.colonne = mat2.colonne;

		for(i=0;i<ris.righe;i++)
		{
			for(j=0;j<ris.colonne;j++)
			{
				ris.val[i][j] = 0;
			}
		}


		for(i=0;i<ris.righe;i++)
		{
			for(j=0;j<ris.colonne;j++)
			{
				for(k=0;k<mat1.colonne;k++)
				{
					ris.val[i][j] = ris.val[i][j] + (mat1.val[i][k] * mat2.val[k][j]);
					
				}
			}
		}
		
		printf("\nRisultato:\n");
		stampamat(ris);
	}else
	{
		printf("Non puoi fare il prodotto matriciale!\n");
	}

	return 0;
}

void stampamat(matrice_t mat)
{
	int i, j;
	for(i=0;i<mat.righe;i++)
	{
		for(j=0;j<mat.colonne;j++)
		{
			printf("%d\t", mat.val[i][j]);
		}
		printf("\n");
	}
}
