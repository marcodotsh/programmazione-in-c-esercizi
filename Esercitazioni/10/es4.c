#include <stdio.h>
#define N 8

void somme_prefisse(int a[], int b[], int n);

void compila_array(int a[], int n);

void stampa_array(int a[], int n);

int main(void) {
	int arr[N], ris[N];

	compila_array(arr, N);

	printf("Array iniziale: \n");
	stampa_array(arr, N);
	
	somme_prefisse(arr, ris, N);

	printf("\nRisultato: \n");
	stampa_array(ris, N);

	printf("\n");

	return 0;
}

void somme_prefisse(int a[], int b[], int n)
{
	int j, i;
	for(j=0;j<n;j++) {
		b[j]=0;
		for(i=0;i<=j;i++) {
			b[j] += a[i];
		}
	}	
}

void compila_array(int a[], int n)
{
	int i;
	for(i=0;i<n;i++) {
		printf("Inserisci elemento %d: ", i+1);
		scanf("%d", &a[i]);
	}
}

void stampa_array(int a[], int n)
{
	int i;
	for(i=0;i<n;i++) {
		printf("%d ", a[i]);
	}
}
