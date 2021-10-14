#include <stdio.h>

int main(void)
{
	int n1, n2, cop, d, contad;
	cop = 1; /*1 se coprimi, 0 se non coprimi */
	contad=1;
	d = 2;
	printf("Inserisci n1: ");
	scanf("%d", &n1);
	printf("Insetisci n2: ");
	scanf("%d", &n2);
	if(n1<n2)
	{
		n1 = n1 + n2;
		n2 = n1 - n2;
		n1 = n1 - n2;
	}
	while(d<=n2)
	{
		if(n1%d == 0 &&  n2%d == 0)
		{
			cop = 0;
			printf("Divisore %d: %d\n", contad, d);
			contad++;
		}
		d++;
	}
	if(cop)
	{
		printf("%d e %d sono coprimi!\n", n1, n2);
	}

	return 0;

}
