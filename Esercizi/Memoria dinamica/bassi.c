#include <stdio.h>
#include <stdlib.h>

#define DIM 100

float *cercabassi(float a[], int n, int *d);

int main(void)
{
	float arr[DIM];
	float *b;
	int num, dim, i;
	
	do {
		printf("Inserisci numero di elementi: ");
		scanf("%d", &num);
	} while(num<=0||num>100);

	for(i=0;i<num;i++) {
		scanf("%f", &arr[i]);
	}

	b = cercabassi(arr, num, &dim);
	if(b) {
		for(i=0;i<dim;i++) {
			printf("%f\n", b[i]);
		}
		free(b);
		b = NULL;
	}
	else
		printf("Errore allocazione memoria\n");

	return 0;
}

float *cercabassi(float a[], int n, int *d)
{
	int i;
	float *p;
	*d = 0;

	for(i=1;i<n-1;i++) {
		if(a[i]<a[i-1]&&a[i]<a[i+1]) {
			(*d)++;
		}
	}
	
	p = malloc(sizeof(float)*(*d));
	*d = 0;
	if(p) {
		for(i=1;i<n-1;i++) {
			if(a[i]<a[i-1]&&a[i]<a[i+1]) {
				*(p+(*d)) = a[i];
				(*d)++;
			}
		}
	}

	return p;
}
