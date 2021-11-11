#include <stdio.h>
#define DIM 7

int ric_bin(int k,int a[],int i,int f);

int main(void)
{
	int arr[DIM], k, ind;
	arr[0]=5;
	arr[1]=8;
	arr[2]=13;
	arr[3]=15;
	arr[4]=16;
	arr[5]=18;
	arr[6]=20;

	printf("Inserisci elemento da cercare: ");
	scanf("%d", &k);

	ind = ric_bin(k, arr, 0, DIM-1);
	
	printf("\nIndice: %d\n\n", ind);

	return 0;
}

int ric_bin(int k,int a[],int i,int f)
{
	int m;
	if(i>f)
		return -1; /*non trovato*/
	m = (i + f) / 2;

	if (k == a[m]) {
		return m;
	}
	else if (k < a[m]){
		return ric_bin(k, a, i, m-1);
	}
	else {
		return ric_bin(k, a, m+1, f);
	}
}
