#include <stdio.h>
#define DIM 15

int minric(int a[], int n);

int main(void)
{
	int arr[DIM], num, i;

	do {
		printf("Quanti elementi? ");
		scanf("%d", &num);
	}while(num<=0||num>DIM);

	for(i=0;i<num;i++) {
		do {
			printf("Inserisci elemento %d: ", i+1);
			scanf("%d", &arr[i]);
		}while(arr[i]<=0);
	}

	printf("Minimo dell'array: %d\n", minric(arr, num-1));

	return 0;
}

int minric(int a[], int n)
{
	if(n==0)
		return a[0];

	if(a[n]<minric(a, n-1))
		return a[n];
	else 
		return minric(a, n-1);

}

