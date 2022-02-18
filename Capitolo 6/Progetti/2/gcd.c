#include <stdio.h>

int main(void)
{
	int n1, n2, gcd, div, mod;

	printf("Enter two integers: ");
	scanf("%d %d", &n1, &n2);

	gcd = n1;
	div = n2;

	do {
		mod = gcd % div;
		gcd = div;
		div = mod;
	} while(div!=0);

	printf("Greatest common divisor: %d\n", gcd);
}

