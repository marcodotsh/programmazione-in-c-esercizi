#include <stdio.h>
#include <string.h>
#define LEN 30

void rightshift(char s[], int n);

int main(void)
{
	char str[LEN+1];
	int num;
	printf("Inserisci stringa: ");
	scanf("%s", str);
	printf("Inserisci numero: ");
	scanf("%d", &num);

	rightshift(str, num);

	printf("Risultato: %s\n", str);

	return 0;
}

void rightshift(char s[], int n)
{
	int i, efflen;
	char temp[LEN+1];
	efflen = strlen(s);

	for(i=0;i<efflen;i++) {
		temp[(i+n)%efflen] = s[i];
	}
	temp[efflen]='\0';

	strcpy(s,temp);
}

