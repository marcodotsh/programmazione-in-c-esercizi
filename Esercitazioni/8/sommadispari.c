#include <stdio.h>

int sommadispari(int,int);
int chiamasomma(int,int);

int main(void)
{
	int x, y;

	do {
		printf("Inserisci x e y: ");
		scanf("%d%d", &x, &y);
	}while(x<0 || y<0);

	printf("Somma di tutti i dispari da %d a %d: %d\n", x, y, chiamasomma(x,y));

	return 0;
}

int chiamasomma(int a, int b)
{
	if(a<b)
		return sommadispari(b,a);
	else
		return sommadispari(a,b);
}

int sommadispari(int a, int b)
{	
	int ris;
	
	if(a%2==0)
	{
		a--;
	}

	ris = (a/2 + 1)*(a/2 + 1) - (b/2)*(b/2);
	
	return ris;
}
