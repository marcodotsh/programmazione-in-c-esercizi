#include <stdio.h>

int main(void)
{
	int n, tmp,dig;
	
	dig = 0;

	printf("Enter a number: ");
	scanf("%d", &n);

	tmp = n;

	if(tmp!=0) {
		while(tmp!=0) {
			dig++;
			tmp /= 10;
		}
	}
	else {
		dig = 1;
	}

	printf("The number %d has %d digits\n", n, dig);

	return 0;
}

