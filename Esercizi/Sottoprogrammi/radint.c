#include <stdio.h>

int radint(int n, int *rad);

int main(void)
{
	int x, ris, isPrecise;

	printf("Inserisci numero intero positivo: ");
	scanf("%d", &x);

	isPrecise = radint(x, &ris);
	
	if(isPrecise) {
		printf("La radice quadrata intera di %d è: %d\n", x, ris);
	}
	else {
		printf("Il numero %d non ha radice quadrata intera :(\n", x);
	}

	return 0;
}

int radint(int n, int *rad)
{	
	int temp;
	temp = n/2;
	while(temp*temp>n)
		temp--;
	*rad = temp;
	if(temp*temp==n)
		return 1;
	else
		return 0;
}

