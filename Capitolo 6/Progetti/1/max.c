#include <stdio.h>

int main(void)
{
	float num, max;

	max = 0.0f;

	do {
		printf("Enter a number: ");
		scanf("%f", &num);
		if (num>max) max = num;
	} while(num>0.0f);

	printf("\nThe largest number entered was %f\n", max);

	return 0;
}

