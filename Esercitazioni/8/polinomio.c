#include <stdio.h>
#define gradopolinomio 8
float potenza(float, int);

int main(void)
{
	int i;
	float coeff[gradopolinomio+1], x, risultato;	/* Il +1 è per il termine noto */
	
	risultato = 0;

	for(i=0;i<gradopolinomio+1;i++)
	{
		if(i==0) {
			printf("Inserisci termine noto: ");
		}
		else {
			printf("Inserisci coefficiente di x^%d: ", i);
		}
		scanf("%f", &coeff[i]);
	}
	
	printf("Inserisci x del polinomio: ");
	scanf("%f", &x);

	for(i=0;i<gradopolinomio+1;i++)
	{
		risultato = risultato + coeff[i]*potenza(x,i);
	}
	
	printf("Risultato: %.2f\n", risultato);

	return 0;
}



float potenza(float a, int n)
{
	float ris;
	ris=1;
	while(n>0)
	{
		ris = ris * a;
		n--;
	}

	return ris;
}
