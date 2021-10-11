#include <stdio.h>
#define DIM 10

int main(void)
{
	int seq[DIM];
	int i, j, duplicato;
	for(i=0;i<DIM;i++)
	{
		printf("Inserire valore %d: ", i + 1);
		scanf("%d", &seq[i]);
	}
	
	for(i=0;i<DIM;i++)
	{
		duplicato = 0;
		for(j=0;j<i && !duplicato;j++)
		{
			if(seq[i]==seq[j])
			{
				duplicato = 1;
			}
		}	
		if(!duplicato)
		{
			printf("%d\n", seq[i]);
		}
	}

	return 0;
}
