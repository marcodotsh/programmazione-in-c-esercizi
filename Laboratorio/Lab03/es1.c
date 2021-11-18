#include <stdio.h>
#define DIM 10

int main(void)
{	
	int i, a[DIM], x, sum, prod;

	sum = 0;
	prod = 1;

	for(i=0;i<DIM;i++) {
		printf("Inserisci elemento %d: ", i+1);
		scanf("%d", &a[i]);
	}
	do{
		printf("Inserisci X tra 0 e 9: ");
		scanf("%d", &x);
	}while(x<0||x>9);

	for(i=0;i<=x;i++)
		sum += a[i];
	for(i=x+1;i<DIM;i++)
		prod *= a[i];
	if(x!=9)
		printf("Somma: %d\nProdotto: %d\n", sum, prod);
	else
		printf("Somma: %d\nProdotto: N/A\n", sum);

	return 0;
}

