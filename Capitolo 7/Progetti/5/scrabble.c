#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int tot;
	char c;

	tot = 0;

	while(c = tolower(getchar()), c != '\n') {
		switch(c) {
			case 'a':
			case 'e':
			case 'i':
			case 'l':
			case 'n':
			case 'o':
			case 'r':
			case 's':
			case 't':
			case 'u':
				tot += 1;
				break;
			case 'd':
			case 'g':
				tot += 2;
				break;
			case 'b':
			case 'c':
			case 'm':
			case 'p':
				tot += 3;
				break;
			case 'f':
			case 'h':
			case 'v':
			case 'w':
			case 'y':
				tot += 4;
				break;
			case 'k':
				tot += 5;
				break;
			case 'j':
			case 'x':
				tot += 8;
				break;
			case 'q':
			case 'z':
				tot += 10;
				break;
		}
	}

	printf("Scrabble value: %d\n", tot);

	return 0;
}

