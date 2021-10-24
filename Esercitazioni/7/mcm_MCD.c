#include <stdio.h>

int mcdf(int, int);
int mcmf(int, int);

int main(void)
{
	int x, y, z, mcd, mcm;
	
	do
	{
		printf("x: ");
		scanf("%d", &x);
	}while(x<=0);

	do
	{
		printf("y: ");
		scanf("%d", &y);
	}while(y<=0);
	
	do
	{
		printf("z: ");
		scanf("%d", &z);
	}while(z<=0);

	mcd = mcdf(mcdf(x,y),z);

	mcm = mcmf(mcmf(x,y),z);

	printf("MCD: %d\nmcm: %d\n", mcd, mcm);

	return 0;
}

int mcdf(int x,int y)
{
	int ris, div, mod;
	if(x>y)
	{
		ris=x;
		div=y;
	}else
	{
		ris=y;
		div=x;
	}

	while(div!=0)
	{
		mod = ris % div;
		ris = div;
		div = mod;
	}

	return ris;
}

int mcmf(int x, int y)
{
	int ris;

	ris = x * y / mcdf(x,y);

	return ris;
}
