#include <stdio.h>
#define DIM 10
int main(void)
{
	int arr[DIM], i, j;
	
	for(i=0;i<DIM;i++)
	{
		printf("Inserisci elemento %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	for(i=0;i<DIM-1;i++)
	{
		for(j=0;j<DIM-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				arr[j] = arr[j] + arr[j+1];
				arr[j+1] = arr[j] - arr[j+1];
				arr[j] = arr[j] - arr[j+1];
			}
		}
	}

	for(i=0;i<DIM;i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
