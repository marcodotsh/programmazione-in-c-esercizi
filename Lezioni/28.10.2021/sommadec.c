#include <stdio.h>
#define N 5

typedef int arr_t[N];

void sommadec(int a[], int b[], int c[], int dim);

int main(void)
{
	int i;
	arr_t arr1, arr2, arr3;
	
	printf("\nArr 1:\n");
	for(i=0;i<N;i++)
		scanf("%d", &arr1[i]);

	printf("\nArr 2:\n");
	for(i=0;i<N;i++)
		scanf("%d", &arr2[i]);

	sommadec(arr1,arr2,arr3,N);

	printf("\nSomma:\n");
	for(i=0;i<N;i++)
		printf("%d", arr3[i]);
	printf("\n");

	return 0;
}

void sommadec(int a[], int b[], int c[], int dim)
{
	int i, sommatemp, riporto;
	riporto = 0;

	for(i=1;i<=dim;i++) {
		sommatemp = a[dim-i]+b[dim-i]+riporto;
		riporto = sommatemp / 10;
		c[dim-i] = sommatemp % 10;
	}

}
