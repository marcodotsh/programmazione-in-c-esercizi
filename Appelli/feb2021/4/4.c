#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 15

int correggi(char s1[], char s2[])
{
	int i, nlet, idx;

	idx = 0;
	nlet = 0;

	for(i=0;s1[i]!='\0';i++) {
		if(i!=0 && s1[i-1]==s1[i]) {
			nlet++;
			if(nlet<=2) {
				s2[idx++]=s1[i];
			}
		}
		else {
			nlet = 1;
			s2[idx++] = s1[i];
		}
	}
	s2[idx] = '\0';

	return (strlen(s1)-strlen(s2));
}

int correttore(FILE *fp_in, FILE *fp_out)
{
	char sin[DIM+1], sout[DIM+1];
	int max, tmax;

	max = 0;

	while(fscanf(fp_in, "%s", sin)>0) {
		tmax = correggi(sin, sout);
		if(tmax>max) {
			max = tmax;
		}
		fprintf(fp_out, "%s\n", sout);
	}

	return max;
}

int main(int argc, char *argv[])
{
	if(argc==3) {
		int max;
		FILE *fin, *fout;

		fin = fopen(argv[1], "r");
		fout = fopen(argv[2], "w");

		if(fin&&fout) {
			max = correttore(fin,fout);
			printf("Numero max lettere eliminate: %d\n", max);
			fclose(fin);
			fin = NULL;
			fclose(fout);
			fout = NULL;
		}
		else {
			printf("Errore apertura file\n");
		}
	}
	else {
		printf("Errore sintassi. Scrivere ./a.out input output\n");
	}

	return 0;
}
