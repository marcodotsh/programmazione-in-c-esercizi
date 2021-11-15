#include <stdio.h>
#define DIM 15

void elaboraArray(int a[], int n, int *nprimi);

int isPrime(int n);

int main(void)
{
	int arr[DIM], i, n;
	
	n=0;

	for(i=0;i<DIM;i++) {
		do {
			printf("Inserisci elemento %d: ", i+1);
			scanf("%d", &arr[i]);
		}while(arr[i]<=0);
	}
	
	elaboraArray(arr, DIM, &n);

	for(i=0;i<n;i++) {
		printf("%d ", arr[i]);
	}
	printf("\nElementi rimasti: %d\n", n);

	return 0;
}

void elaboraArray(int a[], int n, int *nprimi)
{
	int i, j;

	for(i=0;i<n;i++) {
		if(!isPrime(a[i])) {
			for(j=i+1;j<n;j++) {
				a[j-1]=a[j];
			}
			n--;
			i--;
		}
		else
			(*nprimi)++;
	}
}

int isPrime(int n)
{
	int ris, div;
	ris = 1;
	div = 2;

	while((div*div<=n || n==1) && ris) {
		if(n % div == 0 || n==1)
			ris = 0;
		div++;
	}
	
	return ris;
}

