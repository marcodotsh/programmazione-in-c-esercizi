#include <stdio.h>
#define PI 3.14

float circonferenza(float);

int main(void)
{
	float r, c;

	printf("Inserisci il raggio: ");
	scanf("%f", &r);

	c = circonferenza(r);

	printf("Il raggio è %f e la circonferenza è %f\n", r, c);

	return 0;
}

float circonferenza(float raggio)
{
	float circ;

	circ = 2 * PI * raggio;

	raggio = 6.0;
	printf("Raggio dentro la funzione: %f\n", raggio);

	return circ;
}
