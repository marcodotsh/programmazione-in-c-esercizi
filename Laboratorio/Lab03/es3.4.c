#include <stdio.h>
#include <math.h>
#define MAX 10
#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

typedef struct {
	double re;
	double im;
} comp_t;

int maxmod(comp_t a[], int n);

int minfas(comp_t a[], int n);

int main(void)
{
	comp_t valori[MAX];
	int i, ixmaxm, ixminf;

	for(i=0;i<MAX;i++) {
		printf("Inserire parte reale numero %d: ", i+1);
		scanf("%lf", &valori[i].re);
		printf("Inserire parte immaginaria numero %d: ", i+1);
		scanf("%lf", &valori[i].im);
	}

	ixmaxm = maxmod(valori, MAX);

	printf("Numero con modulo massimo: %f + %fi", valori[ixmaxm].re, valori[ixmaxm].im);

	ixminf = minfas(valori, MAX);
	
	printf("Numero con fase minima: %f + %fi", valori[ixminf].re, valori[ixmaxm].im);

	return 0;
}

int maxmod(comp_t a[], int n)
{
	int i;
	double max, tmod, ris;
	max = 0;
	
	for(i=0;i<n;i++) {
		tmod = a[i].re*a[i].re+a[i].im*a[i].im;
		if(tmod>max) {
			max = tmod;
			ris = i;
		}
	}
	
	return ris;
}

int minfas(comp_t a[], int n)
{
	int i;
	double min, tfas, ris;
	min= 2* M_PI;
	
	for(i=0;i<n;i++) {
		tfas = atan(a[i].im/a[i].re);
		if(a[i].re>=0&&a[i].im<0)
			tfas += 2*M_PI;
		else if(a[i].re<0)
			tfas += M_PI;
		if(tfas<min) {
			min = tfas;
			ris = i;
		}
	}

	return ris;
}

