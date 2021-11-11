#include <stdio.h>

int pot_ric(float a, int n);

int main(void)
{
	float base, ris;
	int esp;

	printf("Inserire base: ");
	scanf("%f", &base);
	printf("Inserire esponente: ");
	scanf("%d", &esp);

	ris = pot_ric(base,esp);

	printf("\n%f^%d = %f\n\n", base, esp, ris);

	return 0;
}

int pot_ric(float a, int n)
{
	if(n==0)
		return 1;
	else
		return a*pot_ric(a, n-1);
}
