#include <stdio.h>
#include <string.h>

#define LEN 30

int ricQuan(char s[], FILE *fp);

int main(void)
{
	FILE *fp;
	int npers, qing;
	char ingred[LEN+1];

	fp = fopen("ingredienti.txt", "r");

	if(fp) {
		printf("Per quante persone vuoi cucinare? ");
		scanf("%d", &npers);
		printf("Ricerca ingrediente: ");
		scanf("%s", ingred);

		while(strcmp(ingred, "stop") != 0){
			qing = ricQuan(ingred, fp);
			if(qing!=0) {
				printf("%s: %d\n", ingred, qing*npers);
			}
			else {
				printf("Ingrediente non trovato\n");
			}
			printf("Ricerca ingrediente: ");
			scanf("%s", ingred);
		}
		fclose(fp);

	}
	else {
		printf("Errore apertura file.");
	}

	return 0;
}

int ricQuan(char s[], FILE *fp)
{
	char ting[LEN+1];
	int tquan, ris, trovato;
	trovato = 0;
	ris = 0;
	while(!feof(fp) && !trovato) {
		fscanf(fp, "%s %d", ting, &tquan);
		if(strcmp(s, ting) == 0) {
			trovato = 1;
			ris = tquan;
		}
	}
	rewind(fp);
	return ris;
}

