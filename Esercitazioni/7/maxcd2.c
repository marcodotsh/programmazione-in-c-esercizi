#include <stdio.h>
#define DIM 100
#define LEN 30

typedef struct
{
	unsigned ore;
	unsigned min;
	unsigned sec;
} tempo;

typedef struct
{
	char titolo[LEN+1];
	char autore[LEN+1];
	unsigned annopubb;
	unsigned ntracce;
	tempo durata;
	float prezzo;
	unsigned vendite;
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
		scanf("%u", &dischi[i].annopubb);

		printf("Inserire numero tracce: ");
		scanf("%u", &dischi[i].ntracce);
		
		printf("Inserire ore: ");
		scanf("%u", &dischi[i].durata.ore);
		
		printf("Inserire minuti: ");
		scanf("%u", &dischi[i].durata.min);
		
		printf("Inserire secondi: ");
		scanf("%u", &dischi[i].durata.sec);
		
		printf("Inserire prezzo: ");
		scanf("%f", &dischi[i].prezzo);

		printf("Inserire copie vendute: ");
		scanf("%u", &dischi[i].vendite);
	}

	for(i=0;i<n;i++)
	{
		duratat = ((dischi[i].durata.ore*60)+dischi[i].durata.min)*60+dischi[i].durata.sec;
		if(duratat>duratamax)
		{	duratamax = duratat;	}
	}

	printf("Dischi con durata massima:\n");
	for(i=0;i<n;i++)
	{
		duratat = ((dischi[i].durata.ore*60)+dischi[i].durata.min)*60+dischi[i].durata.sec;
		if(duratat==duratamax)
		{
			printf("Titolo: %s\n", dischi[i].titolo);
		}
	}

	return 0;
}

