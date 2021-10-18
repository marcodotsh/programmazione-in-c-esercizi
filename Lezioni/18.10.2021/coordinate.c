#include <stdio.h>
#include <math.h>
#define N 30
#define M 10
typedef struct
{
	float lat;
	float lon;
	char nome[N+1];	
} localita_t;

int main(void)
{
	localita_t locs[M];
	int i, j;
	float max, temp;
	max = 0;


	for(i=0;i<M;i++)
	{
		printf("Località %d\n", i+1);
		printf("Inserire latitudine,longitudine: ");
		scanf("%f,%f", &locs[i].lat, &locs[i].lon);
		printf("Inserire nome: ");
		scanf("%s", locs[i].nome);
	}

	for(i=0;i<M-1;i++)
	{
		for(j=i+1;j<M;j++)
		{
			temp = (locs[i].lat-locs[j].lat)*(locs[i].lat-locs[j].lat)+(locs[i].lon-locs[j].lon)*(locs[i].lon-locs[j].lon);
			if(max<temp)
			{
				max = temp;
			}
		}
	}
	
	printf("Localita' a distanza massima:\n");
	for(i=0;i<M-1;i++)
	{
		for(j=i+1;j<M;j++)
		{
			temp = (locs[i].lat-locs[j].lat)*(locs[i].lat-locs[j].lat)+(locs[i].lon-locs[j].lon)*(locs[i].lon-locs[j].lon);
			if(max==temp)
			{
				printf("%s e %s\n", locs[i].nome, locs[j].nome);
			}
		}
	}

	max = sqrt(max);

	printf("Distanza massima: %f\n", max);

	return 0;

}
