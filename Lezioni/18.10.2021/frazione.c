#include <stdio.h>
typedef struct
{
	int n;
	int d;
}frazione_t;

int main(void)
{
	frazione_t f1,f2, somma;

	do
	{
		printf("Inserire prima frazione (n d): ");
		scanf("%d %d", &f1.n, &f1.d);
	}while(f1.d<=0);


	do
	{
		printf("Inserire seconda frazione (n d): ");
		scanf("%d %d", &f2.n, &f2.d);
	}while(f2.d<=0);

	somma.n = f1.n * f2.d + f2.n * f1.d;
	somma.d = f1.d * f2.d;

	printf("Somma: %d/%d\n", somma.n, somma.d);

	return 0;
}
