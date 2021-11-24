#include <stdio.h>
#include <string.h>

#define STR_LEN 30

typedef struct {
	char nom[STR_LEN+1];
	char cog[STR_LEN+1];
	char sex;
	int anno;
} persona_t;

int cer_cog(char s[]);

int main(void)
{
	int n;
	char cog[STR_LEN+1];
	printf("Inserisci cognome: ");
	scanf("%30s", cog);
	
	n = cer_cog(cog);

	if(n!=-1)
		printf("Numero di elementi: %d\n", n);

	return 0;
}

int cer_cog(char s[])
{
	persona_t tpers;
	int ris;
	FILE *fp;

	ris = 0;
	fp = fopen("persone.dat", "rb");
	if(fp) {
		while(fread(&tpers, sizeof(persona_t), 1, fp)>0) {
			if(strcmp(s, tpers.cog)==0) {
				printf("Nome: %s\n", tpers.nom);
				printf("Cognome: %s\n", tpers.cog);
				printf("Sesso: %c\n", tpers.sex);
				printf("Anno nascita: %d\n\n", tpers.anno);
				ris++;
			}
		}
		fclose(fp);
		fp = NULL;
	}
	else {
		printf("Errore apertura file\n");
		ris = -1;
	}

	return ris;
}

