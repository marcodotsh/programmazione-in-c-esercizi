#include <stdio.h>
#define DIM 10

int calcola(int arr[], int dim, int *max, int *qmax)
{
	int i, j, sum17;
	
	*max = 0;
	*qmax = 0;
	sum17 = 0;
	
	for(i=0;i<dim-1&&!sum17;i++) {
		for(j=i+1;j<dim&&!sum17;i++) {
			if(arr[i]+arr[j]==17) {
				sum17 = 1;
			}
		}
	}
	for(i=0;i<dim;i++) {
		if(arr[i]>*max) {
			*max = arr[i];
		}
	}
	for(i=0;i<dim;i++) {
		if(arr[i]>*qmax&&arr[i]<*max) {
			*qmax = arr[i];
		}
	}
	
	return sum17;
}

int main(void)
{
	int a[DIM];
	int i, s17, max, qmax;
	
	printf("Inserisci %d elementi: ", DIM);
	for(i=0;i<DIM;i++) {
		scanf("%d", &a[i]);
	}

	s17 = calcola(a, DIM, &max, &qmax);

	printf("s17: %d\nMax: %d\nQmax: %d\n", s17, max, qmax);
	
	return 0;
}
