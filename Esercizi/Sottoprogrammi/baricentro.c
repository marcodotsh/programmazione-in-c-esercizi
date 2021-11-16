#include <stdio.h>
#define DIM 30

int baricentro(int a[], int n);

int main(void)
{
	int arr[DIM], h, i, inxb;

	do {
		printf("Inserisci numero elementi array: ");
		scanf("%d", &h);
	}while(h<=0);
	
	for(i=0;i<h;i++) {
		printf("Inserisci elemento %d: ", i+1);
		scanf("%d", &arr[i]);
	}

	inxb = baricentro(arr, h);

	if(inxb != -1)
		printf("Indice primo baricentro: %d\n", inxb);
	
	else
		printf("Nessun baricentro trovato.\n");
	
	return 0;
}

int baricentro(int a[], int n)
{
	int i, j, s1, s2;

	for(i=0;i<n;i++) {
		s1=0;
		s2=0;
		for(j=0;j<=i;j++)
			s1 += a[j];
		for(j=i+1;j<n;j++)
			s2 += a[j];
		if(s1 == s2)
			return i;
	}

	return -1;
}

