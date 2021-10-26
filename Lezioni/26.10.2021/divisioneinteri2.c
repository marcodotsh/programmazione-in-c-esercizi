#include <stdio.h>

void divisione(int, int, int *, int *);

int main(void)
{
	int x, y, rs, qz;
	int *resto, *quoz;

	*resto = &rs;
	*quoz = &qz;

	do {
	scanf("%d %d", &x, &y);
	}while(y==0);
	
	divisione(x,y,quoz,resto);
	printf("Ris: %d\nResto: %d\n", quoz, resto);

	return 0;
}

void divisione(int a,int b, int *q, int *r)
{
	*q = a/b;
	*r = a%b;
}
