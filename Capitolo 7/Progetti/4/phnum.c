#include <stdio.h>

int main(void)
{
	char c;
	int n;

	n = 0;

	printf("Enter phone number: ");

	while(c = getchar(), c != '\n') {
		switch(c) {
			case 'a':
			case 'A':
			case 'b':
			case 'B':
			case 'c':
			case 'C':
				n *= 10;
				n += 2;
				break;
			case 'd':
			case 'D':
			case 'e':
			case 'E':
			case 'f':
			case 'F':
				n *= 10;
				n += 3;
				break;
			case 'g':
			case 'G':
			case 'h':
			case 'H':
			case 'i':
			case 'I':
				n *= 10;
				n += 4;
				break;
			case 'j':
			case 'J':
			case 'k':
			case 'K':
			case 'l':
			case 'L':
				n *= 10;
				n += 5;
				break;
			case 'm':
			case 'M':
			case 'n':
			case 'N':
			case 'o':
			case 'O':
				n *= 10;
				n += 6;
				break;
			case 'p':
			case 'P':
			case 'q':
			case 'Q':
			case 'r':
			case 'R':
			case 's':
			case 'S':
				n *= 10;
				n += 7;
				break;
			case 't':
			case 'T':
			case 'u':
			case 'U':
			case 'v':
			case 'V':
				n *= 10;
				n += 8;
				break;
			case 'w':
			case 'W':
			case 'x':
			case 'X':
			case 'y':
			case 'Y':
			case 'z':
			case 'Z':
				n *= 10;
				n += 9;
				break;
		}
	}

	printf("%d\n", n);

	return 0;
}

