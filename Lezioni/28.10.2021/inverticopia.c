#include <stdio.h>
#define N 10

void inverticopia(int[],int[],int);
int main(void)
{
	int i;
	int a[N], b[N];

	for(i=0;i<N;i++)
		scanf("%d", &a[i]);

	for(i=0;i<N;i++)
		printf("%d ", a[i]);
	printf("\n");

	inverticopia(a,b,N);

	for(i=0;i<N;i++)
		printf("%d ", b[i]);
	printf("\n");

	return 0;
}

void inverticopia(int a[], int b[], int dim)
{
	int i;
	for(i=0;i<dim;i++) {
		b[i] = a[dim-1-i];
	}
}
