#include <stdio.h>

#define BASE 8

int main(void)
{
	int dec, oct, pow;

	oct = 0;
	pow = 1;

	printf("Enter a number between 0 and 32767: ");
	scanf("%5d", &dec);

	while(dec!=0) {
		oct += (dec%BASE)*pow;
		dec /= BASE;
		pow *= 10;
	}

	printf("In octal, your number is: %.5d\n", oct);
	
	return 0;
}

