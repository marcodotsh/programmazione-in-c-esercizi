#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12,
		first_s, second_s, check;

	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

	first_s = n2 + n4 + n6 + n8 + n10 + n12;
	second_s = n1 + n3 + n5 + n7 + n9 + n11;

	check = 9 - ((((first_s * 3) + second_s) -1) % 10);

	printf("Check digit: %d\n");

	return 0;
}

