#include <stdio.h>

int cerca(int a[], int dim, int *max, int *qmax)
{
	int i, j;
	int somma17;

	somma17 = 0;
	*max = 0;
	qmax = 0;

	for(i=0;i<dim-1 && !somma17;i++) {
		for(j=i+1;j<dim && !somma17;j++) {
			if(a[i]+a[j]==17)
				somma17 = 1;
		}
	}

	for(i=0;i<dim;i++) {
		if(a[i]>*max)
			*max=a[i];
		if(a[i]>*qmax && a[i]<*max)
			*qmax=a[i];
	}

	
	return somma17;
}
