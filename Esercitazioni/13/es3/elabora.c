#include <stdio.h>
#define STR_LEN 30
#define MAX_PER 50
#define PATH_LEN 100
typedef struct {
	char nom[STR_LEN+1];
	char cog[STR_LEN+1];
	char sex;
	int anno;
}persona_t;

void popola_file(char file_p[], persona_t pers[]);

void leggi_file(char file_p[], persona_t pers[]);

int main(void)
{
	char path[PATH_LEN+1];
	char mode;
	persona_t persone[MAX_PER];

	printf("Inserisci percorso file: ");
	scanf("%100s", path);
	do {
		printf("Modalità di apertura?\nr: lettura\nw: scrittura\n");
		scanf(" %c", &mode);
	}while(mode!='r'&&mode!='w');
	
	switch(mode) {
		case 'w':
			popola_file(path, persone);
			break;
		case 'r':
			leggi_file(path, persone);
	}

	return 0;
}

void popola_file(char file_p[], persona_t pers[])
{
	FILE *fp;
	int i, n;

	fp = fopen(file_p, "wb");
	if(fp) {
		do {
			printf("Quante persone vuoi inserire? ");
			scanf("%d", &n);
		}while(n<=0||n>MAX_PER);
		for(i=0;i<n;i++) {
			printf("Persona %d:\n", i+1);
			printf("Nome: ");
			scanf("%30s", pers[i].nom);
			printf("Cognome: ");
			scanf("%30s", pers[i].cog);
			printf("Sesso (M o F): ");
			scanf(" %c", &pers[i].sex);
			printf("Anno nascita: ");
			scanf("%d", &pers[i].anno);
		}
		fwrite(pers, sizeof(persona_t), n, fp);
		fclose(fp);
		fp=NULL;
		printf("Il file è stato popolato correttamente\n");
	}
	else
		printf("Errore apertura file\n");
	
	return;
}

void leggi_file(char file_p[], persona_t pers[])
{
	int i, n;
	FILE *fp;

	fp = fopen(file_p, "rb");
	if(fp) {
		n = fread(pers, sizeof(persona_t), MAX_PER, fp);
		for(i=0;i<n;i++) {
			printf("Persona %d: \n", i+1);
			printf("Nome: %s\n", pers[i].nom);
			printf("Cognome: %s\n", pers[i].cog);
			printf("Sesso: %c\n", pers[i].sex);
			printf("Anno nascita: %d\n\n", pers[i].anno);
		}
		fclose(fp);
		fp=NULL;
		printf("Il file è stato letto correttamente\n");
	}
	else
		printf("Errore apertura file\n");

	return;
}
