#include <stdio.h>
#include <string.h>
#define DIM 40
#define NLETTERE 26
int main()
{
	char frase[DIM+1];
	char lettera;
	int lettere[NLETTERE];
	int i, len, ncons, tot, indicelettera;
	ncons = 0;
	tot = 0;

	for(i=0;i<NLETTERE;i++)
	{
		lettere[i] = 0;
	}

	printf("Inserisci frase: ");
	scanf("%[^\n]", frase);

	len = strlen(frase);

	for(lettera='A';lettera<='Z';lettera++)
	{
		indicelettera = lettera - 65;
		for(i=0;i<DIM;i++)
		{
			if(frase[i]==lettera || frase[i]==lettera+32)
			{
				lettere[indicelettera]++;
			}
		}
		printf("La lettera %c è presente %d volte\n", lettera, lettere[indicelettera]);
	
	}

	for(i=0;i<NLETTERE;i++)
	{
		tot = tot + lettere[i]; 
	}

	ncons = tot - lettere['A'-65] - lettere['E'-65] - lettere['I'-65] - lettere['O'-65] - lettere['U'-65];

	printf("Numero consonanti: %d\n", ncons);

	return 0;
}
