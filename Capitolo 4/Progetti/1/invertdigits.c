#include <stdio.h>

int main(void)
{
	
	int num, res;

	printf("Enter a two-digit number: ");
	scanf("%2d", &num);

	res = (( num % 10 ) * 10 ) + ( num / 10 );

	printf("The reversal is: %d\n", res);
		
	return 0;
}

