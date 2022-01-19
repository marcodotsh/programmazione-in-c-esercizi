#include <stdio.h>

#define CLEN 26
#define LEN 15

int main(void)
{
	FILE *fp;
	char con[CLEN+1], parola[LEN+1];
	int nlet, i, j;
	
	printf("Inserisci stringa controllo: ");
	scanf("%[^\n]", con);

	fp = fopen("testo.txt", "r");
	if(fp) {
		for(i=0;con[i]!='\0';i++) {
			nlet = 0;
			while(fscanf(fp, "%s", parola)>0) {
				for(j=0;parola[j]!='\0';j++) {
					if(con[i] == parola[j])
						nlet++;
				}
			}
			printf("%c: %d\n", con[i], nlet);
			rewind(fp);
		}
	}
	else {
		printf("Errore apertura file\n");
	}
	
	return 0;
}
