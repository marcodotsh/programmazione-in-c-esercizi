#include <stdio.h>

int main(void)
{
	int n1, n2;
	float media;
	printf("Inserire valore 1: ");
	scanf("%d", &n1);
	printf("Inserire valore 2: ");
	scanf("%d", &n2);
	media = (n1 + n2) / 2.0;
	printf("La media è %.3f\n", media);
	return 0;
}
