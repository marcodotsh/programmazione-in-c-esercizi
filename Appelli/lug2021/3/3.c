#include <stdio.h>

void conta(char filename[], int *nc, int *np, int *nr)
{
	char tmp;
	FILE *fp;
	int prec;

	*nc = 0;
	*np = 0;
	*nr = 0;
	prec = 0; /*Portato a 1 quando il carattere controllato è un a capo o uno spazio*/
	fp = fopen(filename, "r");
	
	if(fp) {
		while(fscanf(fp, "%c", &tmp)>0) {
			(*nc)++;
			if(tmp == '\n' || tmp == ' ') {
				if(tmp == '\n') {
					(*nr)++;
				}
				if(!prec) {
					(*np)++;
				}
				prec = 1;
			}
			else {
				prec = 0;
			}
		}
		rewind(fp);

		fclose(fp);
		fp = NULL;
	}
	else {
		printf("Errore apertura file\n");
	}

	return;
}

int main(void)
{
	int nc, np, nr;
	char s[30];

	printf("Inserire nome file: ");
	scanf("%s", s);

	conta(s, &nc, &np, &nr);

	printf("Caratteri: %d\nParole: %d\nRighe: %d\n", nc, np, nr);

	return 0;
}
