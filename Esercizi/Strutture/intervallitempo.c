#include <stdio.h>
#define DIM 10

typedef struct
{
	int ore;
	int min;
	int sec;
} intervallo_t;

int main(void)
{
	int i, n, tot;
	intervallo_t inter[DIM];

	tot = 0;

	do
	{
		printf("Inserisci numero intervalli: ");
		scanf("%d", &n);
	}while(n<=0 || n>DIM);

	for(i=0;i<n;i++)
	{	
		do
		{
			printf("Inserisci ore intervallo %d: ", i + 1);
			scanf("%d", &inter[i].ore);
		}while(inter[i].ore<0 || inter[i].ore>=24);

		do
		{
			printf("Inserisci minuti intervallo %d: ", i + 1);
			scanf("%d", &inter[i].min);
		}while(inter[i].min<0 || inter[i].min>=60);

		do
		{
			printf("Inserisci secondi intervallo %d: ", i + 1);
			scanf("%d", &inter[i].sec);
		}while(inter[i].sec<0 || inter[i].sec>=60);
	}

	for(i=0;i<n;i++)
	{
		tot = tot + (((inter[i].ore * 60)+inter[i].min)*60+inter[i].sec);
	}

	printf("\nGiorni: %d\nOre: %d\nMinuti: %d\nSecondi: %d\n", tot/(24*60*60), (tot/(60*60))%24, (tot/60)%60, tot%60);

	return 0;
}
