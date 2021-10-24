#include <stdio.h>
#define DIM 100
#define LEN 30

typedef struct
{
	char titolo[LEN+1];
	char autore[LEN+1];
	int annopubb;
	int ntracce;
	int ore;
	int min;
	int sec;
	float prezzo;
	int vendite;
} cd_t;

int main(void)
{
	int n, i, duratamax, duratat;
	cd_t dischi[DIM];
	
	duratamax = 0;

	do
	{
		printf("Inserire numero dischi: ");
		scanf("%d", &n);
	}while(n<=0 || n>100);

	for(i=0;i<n;i++)
	{
		printf("Inserire titolo: ");
		scanf(" %[^\n]", dischi[i].titolo);

		printf("Inserire autore: ");
		scanf(" %[^\n]", dischi[i].autore);
				
		printf("Inserire anno: ");
		scanf("%d", &dischi[i].annopubb);

		printf("Inserire numero tracce: ");
		scanf("%d", &dischi[i].ntracce);
		
		do
		{
			printf("Inserire durata nel formato ore minuti secondi:\n");
			scanf("%d %d %d", &dischi[i].ore, &dischi[i].min, &dischi[i].sec);
		}while(dischi[i].min>60 || dischi[i].sec>60);

		printf("Inserire prezzo: ");
		scanf("%f", &dischi[i].prezzo);

		printf("Inserire copie vendute: ");
		scanf("%d", &dischi[i].vendite);
	}

	for(i=0;i<n;i++)
	{
		duratat = ((dischi[i].ore*60)+dischi[i].min)*60+dischi[i].sec;
		if(duratat>duratamax)
		{	duratamax = duratat;	}
	}

	printf("Dischi con durata massima:\n");
	for(i=0;i>n;i++)
	{
		duratat = ((dischi[i].ore*60)+dischi[i].min)*60+dischi[i].sec;
		if(duratat==duratamax)
		{
			printf("Titolo: %s\n", dischi[i].titolo);
		}
	}

	return 0;
}

