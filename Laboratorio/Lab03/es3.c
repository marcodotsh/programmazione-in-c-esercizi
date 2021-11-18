#include <stdio.h>

typedef struct {
	float re;
	float im;
} comp_t;

int samefas(comp_t a, comp_t b);

int main(void)
{
	comp_t n1, n2, sum;

	printf("Inserire parte reale numero 1: ");
	scanf("%f", &n1.re);
	printf("Inserire parte immaginaria numero 1: ");
	scanf("%f", &n1.im);
	printf("Inserire parte reale numero 2: ");
	scanf("%f", &n2.re);
	printf("Inserire parte immaginaria numero 2: ");
	scanf("%f", &n2.im);

	sum.re = n1.re+n2.re;
	sum.im = n1.im+n2.im;

	printf("n1+n2 = %f + %fi\n", sum.re, sum.im);

	if(samefas(n1, n2)) {
		printf("n1 e n2 hanno la stessa fase\n");
	}
	else 
		printf("n1 e n2 NON hanno la stessa fase\n");
	
	return 0;
}

int samefas(comp_t a, comp_t b)
{
	if(a.re*b.re>=0) {
		if(a.re==0||b.re==0) {
			if(a.re==b.re)
				return 1;
			return 0;
		}
		if((a.im/a.re)==(b.im/b.re))
			return 1;
	}
	return 0;
}

