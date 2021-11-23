#include <stdio.h>
#include <stdlib.h>
#define N 10

int* arrpari(int a[], int d, int *n);

int main(void)
{
	int i, arr[N], *p, dim;

	for(i=0;i<N;i++) {
		printf("arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}

	p = arrpari(arr, N, &dim);

	if(dim!=-1) {
		for(i=0;i<dim;i++) {
			printf("%d\n", p[i]);
		}
		free(p);
		p = NULL;
	}
	else
		printf("Errore allocazione\n");

	return 0;
}

int* arrpari(int a[], int d, int *n)
{
	int *b, i;
	*n=0;

	for(i=0;i<d;i++) {
		if(a[i]%2==0)
			(*n)++;
	}
	b = (int *)malloc(sizeof(int)*(*n));
	if(b) {
		(*n) = 0;
		for(i=0;i<d;i++) {
			if(a[i]%2==0) {
				b[(*n)] = a[i];
				(*n)++;
			}
		}
	}
	else
		(*n) = -1;

	return b;
}
