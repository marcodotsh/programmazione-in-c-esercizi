#include <stdio.h>
#include <stdlib.h>

float* cercabassi(float a[], int dim, int *nbassi)
{
	float *tmp;
	int i, idx;

	*nbassi = 0;
	idx = 0;

	for(i=1;i<dim-1;i++) {
		if (a[i]<a[i-1]&&a[i]<a[i+1]) {
			(*nbassi)++;
		}
	}

	tmp = malloc(sizeof(float)*(*nbassi));
	if(tmp) {
		for(i=1;i<dim-1;i++) {
			if(a[i]<a[i-1]&&a[i]<a[i+1]) {
				tmp[idx++] = a[i];
			}
		}
	}
	else {
		printf("Errore allocazione memoria\n");
	}

	return tmp;
}

int main(void)
{
	float *arr, *bas;
	int i, dima, dimb;

	do {
		printf("Quanti val inserire? ");
		scanf("%d", &dima);
	} while(dima<=0);

	arr = malloc(sizeof(float)*dima);
	if(arr) {
		for(i=0;i<dima;i++) {
			printf("Elemento %d: ", i);
			scanf("%f", &arr[i]);
		}
		bas = cercabassi(arr, dima, &dimb);
		printf("I bassi sono:\n");

		for(i=0;i<dimb;i++) {
			printf("%f\n", bas[i]);
		}
		free(arr);
		arr = NULL;
		free(bas);
		bas = NULL;
	}
	else {
		printf("Errore allocazione memoria\n");
	}

	return 0;
}
