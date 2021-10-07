#include <stdio.h>
#define DIM 20

int main(void)
{
	int arr[DIM];
	int i, j;

	for(i=0;i<DIM;i++)
	{
		printf("Inserisci l'elemento di indice %d: ", i);
		scanf("%d", &arr[i]);
	}

	for(i=0;i<(DIM/2);i++)
	{
		j = DIM - i - 1;
		arr[i] = arr[i] + arr[j];
		arr[j] = arr[i] - arr[j];
		arr[i] = arr[i] - arr[j];
	}

	for(i=0;i<DIM;i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}
