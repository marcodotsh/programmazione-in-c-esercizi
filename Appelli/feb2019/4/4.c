#include <stdio.h>
#define DIM 8

int calcola(int a[], int t, int dim, float *avg)
{
	int i, j, product, res;
	res = 0;
	*avg = 0;
	for(i=0;i<dim;i++) {
		*avg += a[i];
	}
	*avg /= dim;

	for(i=0;i<1+dim-t;i++) {
		product = 1;
		for(j=0;j<t;j++) {
			product *= a[i+j];
		}
		if(product<*avg) {
			res++;
		}
	}
	
	return res;
}

int main(void)
{
	int a[DIM], t, i, nsubvect;
	float avg;

	printf("Inserisci %d elementi array:\n", DIM);
	for(i=0;i<DIM;i++) {
		scanf("%d", &a[i]);
	}
	printf("Inserire lungezza sottovettori: ");
	scanf("%d", &t);
	nsubvect = calcola(a, t, DIM, &avg);
	printf("Media: %f\nSottovettori: %d\n", avg, nsubvect);
	return 0;
}
