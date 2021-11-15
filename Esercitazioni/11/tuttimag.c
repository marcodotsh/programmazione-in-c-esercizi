#include <stdio.h>
#define DIM 15

int tuttimag(int a[],int n,int m);

int main(void)
{
	int arr[DIM], num, mag;
	int i;
	do {
		printf("Inserisci numero elementi array: ");
		scanf("%d", &num);
	}while(num<=0||num>15);

	for(i=0;i<num;i++) {
		do {
			printf("Inserisci elemento %d: ", i+1);
			scanf("%d", &arr[i]);
		}while(arr[i]<0);
	}
	
	do {
		printf("Inserisci elemento controllore: ");
		scanf("%d", &mag);
	}while(mag<0);

	if(tuttimag(arr, num-1, mag)) {
		printf("Gli elementi dell'array sono tutti maggiori di %d\n", mag);
	}
	else {
		printf("Gli elementi dell'array non sono tutti maggiori di %d\n", mag);
	}

	return 0;
}

int tuttimag(int a[], int n, int m)
{
	if(a[n]>m) {
		if(n==0)
			return 1;
		return tuttimag(a, n-1, m);
	}
	else
		return 0;
}
