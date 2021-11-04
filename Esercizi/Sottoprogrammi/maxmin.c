#include <stdio.h>

void minmax(int a, int b, int *min, int *max);

int main(void)
{
	int x, y, min, max;

	printf("Inserisci due numeri interi: ");
	scanf("%d%d", &x, &y);
	
	minmax(x, y, &min, &max);

	printf("\nMinimo: %d\nMassimo: %d\n", min, max);

	return 0;
}

void minmax(int a, int b, int *min, int *max)
{
	if(a>b) {
		*min = b;
		*max = a;
	}
	else {
		*min = a;
		*max = b;
	}
}

