#include <stdio.h>
#include <string.h>
#define LEN 100

void convertinumero(char str[], int *num, int *valido);

int main(void)
{
	FILE *fp;
	char s[LEN+1];
	int n, flag, tot;

	tot = 0;
	
	fp = fopen("testo2.txt", "r");
	if(fp) {
		while(fscanf(fp, "%s", s)>0) {
			convertinumero(s, &n, &flag);
			if(flag)
				tot += n;
		}
		printf("Tot: %d\n", tot);
		fclose(fp);
		fp = NULL;
	}
	else
		printf("Errore apertura file\n");

	return 0;
}

void convertinumero(char str[], int *num, int *valido)
{
	int i, len;
	*num = 0;
	*valido = 1;
	len = strlen(str);
	for(i=0;i<len && *valido;i++) {
		if(str[i]>='0'&&str[i]<='9') {
			*num *= 10;
			*num += (str[i] - '0');
		}
		else
			*valido = 0;
	}
}
