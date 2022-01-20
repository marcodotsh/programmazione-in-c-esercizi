#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* sottostr(char s[], int k)
{
	int i, len;
	char *res;
	len = strlen(s);
	res = malloc(sizeof(char)*(k+1));
	if(res) {
		for(i=0;i<k;i++) {
			if(len-i>0) {
				res[i] = s[i];
			}
			else {
				res[i] = s[len-1];
			}
		}
		res[i] = '\0';
	}
	else {
		printf("Errore allocazione memoria\n");
	}
	return res;
}

int main(void)
{
	char frase[50], *ris;
	int k;
	printf("Inserisci frase: ");
	scanf(" %[^\n]", frase);
	printf("Inserisci k: ");
	scanf("%d", &k);
	ris = sottostr(frase, k);

	printf("\n%s\n", ris);

	return 0;
}
