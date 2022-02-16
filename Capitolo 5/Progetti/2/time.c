#include <stdio.h>

int main(void)
{
	int h, m;

	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &h, &m);

	printf("Equivalent 12-hour time: %d:%d ", (h>12)?h-12:h, m);
	
	if(h>12) {
		printf("PM\n");
	}
	else {
		printf("AM\n");
	}

	return 0;
}
