#include <stdio.h>

int main(void)
{
	int i, div;
	float e, tmp, epsi;

	e = 1.0f;
	div = 1;
	tmp = 1.0f;

	printf("Enter number epsilon: ");
	scanf("%f", &epsi);

	for(i=1;tmp>=epsi;i++) {
		div *= i;
		tmp = 1.0f / div;
		e += tmp;
	}

	printf("e approssimation: %f\n", e);
	
	return 0;
}

