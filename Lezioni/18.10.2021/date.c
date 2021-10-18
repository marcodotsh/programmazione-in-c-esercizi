#include <stdio.h>
typedef struct
{
	int giorno;
	int mese;
	int anno;
} data_t;

int main(void)
{
	data_t d1, d2;
	int ris;

	ris = 0;

	printf("Inserisci data 1 (g m a): ");
	scanf("%d %d %d", &d1.giorno, &d1.mese, &d1.anno);
	
	printf("Inserisci data 2 (g m a): ");
	scanf("%d %d %d", &d2.giorno, &d2.mese, &d2.anno);
	
	if(d1.anno < d2.anno || (d1.anno == d2.anno && (d1.mese < d2.mese || (d1.mese == d2.mese && d1.giorno < d2.giorno))))
	{
		ris = 1;
	}

	printf("%d\n", ris);

	return 0;
}
