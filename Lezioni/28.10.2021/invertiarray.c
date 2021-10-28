#include <stdio.h>
#define N 10

void invertiarray(int[],int);
int main(void)
{
	int i;
	int a[N];

	for(i=0;i<N;i++)
		scanf("%d", &a[i]);

	for(i=0;i<N;i++)
		printf("%d ", a[i]);
	printf("\n");

	invertiarray(a,N);

	for(i=0;i<N;i++)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}

void invertiarray(int vett[], int dim)
{
	int i, temp;
	for(i=0;i<dim/2;i++) {
		temp = vett[i];
		vett[i] = vett[dim-1-i];
		vett[dim-1-i] = temp;
	}
}
