#include <stdio.h>
#include <string.h>
#define LEN 30

void copia(char *s, char *n_s, int *nv, int *nc);

int isvoc(char c);

int main(void)
{
	char str[LEN+1], n_str[LEN+1], nomef[LEN+1];
	int nv, nc;
	FILE *fpi;

	printf("Inserisci nome file: ");
	scanf("%30s", nomef);

	fpi = fopen(nomef, "r");
	if(fpi) {
		fscanf(fpi, "%s", str);
		while(!feof(fpi)) {
			copia(str, n_str, &nv, &nc);
			printf("%s\nNumero di vocali: %d Numero consonanti: %d\n", n_str, nv, nc);
			fscanf(fpi, "%s", str);
		}
		fclose(fpi);
	}
	else
		printf("Errore apertura file\n");

	return 0;
}

void copia(char *s, char *n_s, int *nv, int *nc)
{
	int i, len;
	len = strlen(s);
	*nv = 0;
	*nc = 0;

	for(i=0;i<len;i++) {
		if(isvoc(*(s+i))) {
			*(n_s+(*nv)) = *(s+i);
			(*nv)++;
		}
	}
	
	for(i=0;i<len;i++) {
		if(!isvoc(*(s+i))) {
			*(n_s+(*nv)+(*nc)) = *(s+i);
			(*nc)++;
		}
	}
	*(n_s+(*nv)+(*nc)) = '\0';

}

int isvoc(char c)
{
	switch (c) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			return 1;
		default:
			return 0;
	}
}

