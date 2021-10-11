#include <stdio.h>
#define DIM 5

int main(void)
{
	int a1[DIM], a2[DIM], i, j;
	int conto1, conto2, permutazioni;
	for(i=0;i<DIM;i++)
	{
		printf("Inserisci valore %d: ", i + 1);
		scanf("%d", &a1[i]);
	}
	for(i=0;i<DIM;i++)
	{
		printf("Inserisci valore %d: ", i + 1);
		scanf("%d", &a2[i]);
	}
	
	permutazioni = 1;

	for(i=0;i<DIM && permutazioni;i++)
	{
		conto1 = 0;
		conto2 = 0;
		for(j=0;j<DIM;j++)
		{
			if(a1[i] == a1[j])
			{
				conto1++;
			}
			if(a1[i] == a2[j])
			{
				conto2++;
			}
		}
		if (conto1 != conto2)
		{
			permutazioni = 0;
		}
	}
	
	if(permutazioni)
	{
		printf("Gli array hanno gli stessi elementi permutati!\n");
	}else
	{
		printf("Gli array non hanno gli stessi elementi permutati...\n");
	}
	return 0;
}

