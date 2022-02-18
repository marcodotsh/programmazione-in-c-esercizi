#include <stdio.h>

int main(void)
{
	int num, tmp, square;

	printf("Enter a number: ");
	scanf("%d", &num);

	square = 4;
	tmp = 5;

	while(square<=num) {
		printf("%d\n", square);
		square += tmp + tmp + 2;
		tmp += 4;		
	}

	return 0;
}

