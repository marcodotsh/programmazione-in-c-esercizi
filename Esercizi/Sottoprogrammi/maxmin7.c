#include <stdio.h>
#define DIM 50

void maxmin7(int a[], int n, int *mx, int *mn);

int main(void)
{
	int arr[DIM];
	int min, max, i, n;
	
	do {
		printf("Inserisci numero di elementi: ");
		scanf("%d", &n);	
	}while(n<7||n>50);

	for(i=0;i<n;i++) {
		printf("Inserisci elemento %d: ", i+1);
		scanf("%d", &arr[i]);
	}

	maxmin7(arr, n, &max, &min);

	printf("Massimo somme: %d\nMinimo somme: %d\n", max, min);

	return 0;
}

void maxmin7(int a[], int n, int *mx, int *mn)
{
	int i, j, somma;
	for(i=0;i<=n-7;i++) {
		somma=0;
		for(j=0;j<7;j++) {
			somma += a[i+j];
		}
		printf("Somma %d: %d\n", i+1, somma);
		if(i==0) {
			*mn = somma;
			*mx = somma;
		}
		if(somma<*mn) {
			*mn = somma;
		}
		if(somma>*mx) {
			*mx = somma;
		}
	}
}

