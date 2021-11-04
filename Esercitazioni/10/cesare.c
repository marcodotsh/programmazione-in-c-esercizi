#include <stdio.h>
#define LEN 30

void caesarenc(char s[], int k);

void caesardec(char s[], int k);

int main(void)
{
	char str[LEN+1];
	int key;

	printf("Inserisci parola (solo caratteri minuscoli): ");
	scanf("%s", str);
	printf("Inserisci chiave di cifratura: ");
	scanf("%d", &key);
	key = key % ('z'-'a'+1);
	caesarenc(str, key);

	printf("Stringa criptata: %s\n\n", str);

	caesardec(str, key);

	printf("Stringa decriptata: %s\n", str);
	
	return 0;
}

void caesarenc(char s[], int k)
{
	int i;
	for(i=0;s[i]!='\0';i++) {
		s[i] = (s[i] - 'a' + k) % ('z' - 'a' + 1) + 'a';
	}
}

void caesardec(char s[], int k)
{
	int i;
	for(i=0;s[i]!='\0';i++) {
		s[i] = (('z'-'a'+1)+s[i] - 'a' - k) % ('z' - 'a' + 1) + 'a';
	}
}
