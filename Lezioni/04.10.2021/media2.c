#include <stdio.h>

int main(void)
{
	int cont, somma, voto;
	float media;
	
	cont = 0;
	somma = 0;
	
	do
	{
		scanf("%d", &voto);
		cont = cont + 1;
		somma = somma + voto;
	} while(voto != 0);

	if(cont == 1)
	{
		printf("Sequenza vuota\n");;
	}
	else
	{
		media = (float)somma / (cont - 1);
		printf("Media: %.2f\n", media);
	}
	return 0;
}
