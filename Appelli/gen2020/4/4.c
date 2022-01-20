#include <stdio.h>
#define WLEN 15
#define CLEN 26
#define FILENAME "testo.txt"

int charinword(char s[], char x)
{
	int i, res;
	res = 0;
	for(i=0;s[i]!='\0';i++) {
		if(s[i]==x) {
			res++;
		}
	}

	return res;
}

int main(void)
{
	FILE *fp;
	char word[WLEN+1], controlla[CLEN+1];
	int i, j, temp; /*temp contiene le ricorrenze della lettera corrente nel file.*/

	printf("Inserire sequenza di controllo: ");
	scanf("%s", controlla);

	fp = fopen(FILENAME, "r");
	if(fp) {
		for(i=0;controlla[i]!='\0';i++) {
			temp = 0;
			while(fscanf(fp, "%s", word)>0) {
				temp += charinword(word,controlla[i]);
			}
			printf("%c: %d\n", controlla[i], temp);
			rewind(fp);
		}
		fclose(fp);
		fp = NULL;
	}
	else {
		printf("Errore apertura file \n");
	}
	return 0;
}
