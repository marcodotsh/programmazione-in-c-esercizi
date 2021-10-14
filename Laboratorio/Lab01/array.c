#include <stdio.h>
#define DIM1 10
#define DIM2 5

int main(void)
{
	int a[DIM1], b[DIM2], i, j, cont;
    cont = 0; /* 0 se non contenuta, 1 se contenuta */
	for(i=0;i<DIM1;i++)
    {
        printf("Inserisci valore %d array 1: ", i+1);
        scanf("%d", &a[i]);
    }
    for(i=0;i<DIM2;i++)
    {
        printf("Inserisci valore %d array 2: ", i+1);
        scanf("%d", &b[i]);
    }

	for(i=0;i<=DIM1-DIM2 && cont!=DIM2;i++)
	{
        cont = 0;
		for(j=0;j<DIM2;j++)
        {
            if((b[j]==a[i+j]) )
            {
                cont++;
            }
        }
	}

	if(cont==DIM2)
    {
        printf("CONTIENE!\n");
    }

    return 0;
}
