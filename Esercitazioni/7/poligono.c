#include <stdio.h>
#include <math.h>
#define DIM 10

typedef struct
{
	float x;
	float y;
} punto_t;

float distanza(punto_t, punto_t);

int main(void)
{
	int i, n;
	float per;
	punto_t punti[DIM];

	do
	{
		printf("Inserire numero vertici poligono (min 3, max 10): ");
		scanf("%d", &n);
	}while(n<3||n>10);

	for(i=0;i<n;i++)
	{
		printf("Inserisci x punto %d: ", i + 1);
		scanf("%f", &punti[i].x);
		printf("Inserisci y punto %d: ", i + 1);
		scanf("%f", &punti[i].y);
	}

	per = distanza(punti[n-1], punti[0]);
	for(i=0;i<n-1;i++)
	{
		per = per + distanza(punti[i], punti[i+1]);
	}

	printf("Perimetro poligono: %f\n", per);

	return 0;
}

float distanza(punto_t p1, punto_t p2)
{
	float ris;

	ris = sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));

	return ris;
}
