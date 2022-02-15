#include <stdio.h>

int main(void)
{
	
	int n1, n2, n3, res;

	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &n1, &n2, &n3);

	res = n1 + 10 * (n2 + (10*n3));

	printf("The reversal is: %d\n", res);
		
	return 0;
}

