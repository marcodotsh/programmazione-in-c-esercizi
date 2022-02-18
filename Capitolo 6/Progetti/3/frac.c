#include <stdio.h>

int main(void)
{
	int num, div, gcd, d, mod;

	printf("Enter a fraction in the form num/div: ");
	scanf("%d /%d", &num, &div);

	gcd = num;
	d = div;
	
	do {
		mod = gcd % d;
		gcd = d;
		d = mod;
	} while(d!=0);

	num /= gcd;
	div /= gcd;

	printf("In lowest terms: %d/%d\n", num, div);
	
	return 0;
}

