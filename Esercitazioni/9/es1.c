#include <stdio.h>
#define DIM 100

int s17mxqmx(int arr[], int dim, int *max, int *qmax);

int main(void)
{
	int a[DIM], n, mx, qmx, i, issum17;
	do {
		printf("Inserisci il numero di elementi dell'array: ");
		scanf("%d", &n);
	}while(n<=0);

	for(i=0;i<n;i++) {
		printf("Inserisci elemento %d: ", i+1);
		scanf("%d", &a[i]);
	}

	issum17 = s17mxqmx(a, n, &mx, &qmx);

	printf("\nSomma 17: %d\nMassimo:%d\nQuasi massimo: %d\n", issum17, mx, qmx);
	
	return 0;
}

int s17mxqmx(int arr[], int dim, int *max, int *qmax)
{
	int i,j;
	*max = arr[0];
	*qmax = -1;

	for(i=1;i<dim;i++) {
		if(arr[i]>*max)
		{
			*max = arr[i];
		}
	}

	for(i=0;i<dim;i++) {
		if(arr[i]>*qmax&&arr[i]<*max)
		{
			*qmax = arr[i];
		}
	}

	for(i=0;i<dim;i++) {
		for(j=i+1;j<dim;j++){
			if(arr[i]+arr[j]==17)
				return 1;
		}
	}

	return 0;
}
