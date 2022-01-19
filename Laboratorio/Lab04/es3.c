#include <stdio.h>
#include <string.h>

#define LEN 15

int analizzastringa(char s[]);

int main()
{
	FILE *fi, *fo;
	char tmp[LEN+1];
	
	fi = fopen("testo.txt", "r");
	fo = fopen("risultato.txt", "w");
	if(fi && fo) {
		while(fscanf(fi, "%s", tmp)>0) {
			if(analizzastringa(tmp)) {
				fprintf(fo, "%s\n", tmp);
			}	
		}
		fclose(fi);
		fclose(fo);
		fi = NULL;
		fo = NULL;
	}
	else {
		printf("Errore apertura file\n");
	}

	return 0;
}

int analizzastringa(char s[])
{
	int i, len, ncifre, ris;
	ncifre = 0;
	len = strlen(s);
	for(i=0;i<len;i++) {
		if(s[i]>='0' && s[i]<='9') {
			ncifre++;
		}
	}

	if(len>5 && ncifre>=2 && (len-ncifre)>0) {
		ris = 1;
	}
	else {
		ris = 0;
	}

	return ris;
}
