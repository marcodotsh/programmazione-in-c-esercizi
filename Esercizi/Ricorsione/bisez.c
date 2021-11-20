#include <stdio.h>
#define DIM 10

int cerca(int a[], int i, int f, int n);

int main(void)
{
	int arr[DIM], num, i, trovato;

	for(i=0;i<DIM;i++) {
		printf("Arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}

	printf("Numero da cercare: ");
	scanf("%d", &num);

	trovato = cerca(arr, 0, DIM-1, num);

	if(trovato==1)
		printf("Elemento individuato\n");
	else if(trovato==0)
		printf("Elemento NON trovato\n");
	else
		printf("Errore\n");

	return 0;
}

int cerca(int a[], int i, int f, int n)
{
	int m;
	m = (i + f) / 2;
	if(n<a[i]||n>a[f])
		return 0;
	if(n==a[m])
		return 1;
	if(n>a[m])
		return cerca(a, m+1, f, n);
	if(n<a[m])
		return cerca(a, i, m-1, n);

	return -1;
}

