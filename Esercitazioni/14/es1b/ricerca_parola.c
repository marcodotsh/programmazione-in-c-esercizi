#include <stdio.h>
#include <string.h>

#define PATH_LEN 100
#define WORD_LEN 100

int isinside(char big[], char little[]);

int ric_par(char fpath[], char word[]);

int main(void)
{
	int nric;
	char path[PATH_LEN+1];
	char str[WORD_LEN+1];

	printf("Inserisci percorso file: ");
	scanf("%100s", path);

	printf("Parola da cercare: ");
	scanf("%30s", str);

	nric = ric_par(path, str);
	
	if(nric!=-1)
		printf("La parola compare %d volte\n", nric);

	return 0;
}

int isinside(char big[], char little[])
{
	int i, j, flag, ris, biglen, litlen;
	biglen = strlen(big);
	litlen = strlen(little);
	flag = 0;
	ris = 0;
	if(biglen>=litlen) {
		for(i=0;i<=biglen-litlen;i++) {
			flag = 1;
			for(j=0;j<litlen && flag;j++) {
				if(big[i+j]!=little[j])
					flag = 0;
			}
			if(flag){
				ris++;
			}
		}
	}
	return ris;
}

int ric_par(char fpath[], char word[])
{
	int ris;
	char tmp[WORD_LEN];
	FILE *fp;
	ris=0;

	fp = fopen(fpath, "r");
	if(fp) {
		while(fscanf(fp, "%s", tmp)>0) {
			ris += isinside(tmp, word);
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

