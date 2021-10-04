#include <stdio.h>

int main(void)
{
	int cont, somma, voto;
	float media;

	cont = 0;
	somma = 0;

	scanf("%d", &voto);

	while(voto != 0)
	{
		somma = somma + voto;
		cont = cont + 1;
		scanf("%d", &voto);
	}
	if(cont == 0)
	{
		printf("Sequenza vuota\n");
	}
	else
	{
		media = (float)somma / cont;
		printf("media: %.2f\n", media);
	}

	return 0;
}
