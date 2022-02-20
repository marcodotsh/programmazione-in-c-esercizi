#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int h, m;
	char x;

	printf("Enter a 12-hour time: ");
	scanf("%2d:%2d %c", &h, &m, &x);

	x = toupper(x);

	if(x == 'P') {
		h += 12;
	}

	printf("Equivalent 12-hour time: %d:%d\n", h, m);

	return 0;
}
