#include <stdio.h>
#include <string.h>
#define LEN 30

void invric(char s[], int n);

int main(void)
{
	char str[LEN+1];

	printf("Inserisci stringa: ");
	scanf("%s", str);

	invric(str, strlen(str)-1);

	return 0;
}

void invric(char s[], int n)
{
	if(n==0) {
		printf("%c\n", s[0]);
	}
	else {
		printf("%c", s[n]);
		invric(s, n-1);
	}
}

