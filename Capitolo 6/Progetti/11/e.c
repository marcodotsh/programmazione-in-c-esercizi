#include <stdio.h>

int main(void)
{
	int i, n, div;
	float e, tmp;

	e = 1.0f;
	div = 1;

	printf("Enter number of iterations: ");
	scanf("%d", &n);

	for(i=1;i<=n;i++) {
		div *= i;
		tmp = 1.0f / div;
		e += tmp;
	}

	printf("e approssimation: %f\n", e);
	
	return 0;
}

