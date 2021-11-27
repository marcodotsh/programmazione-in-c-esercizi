#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 50

char *dup_string(char s[]);

int main(void)
{
	char str[LEN];
	char *pt;
	
	printf("Inserisci stringa: ");
	scanf("%50s", str);
	pt = dup_string(str);
	if(pt) {
		printf("Stringa copiata: %s\n", pt);
		free(pt);
		pt = NULL;
	}

	return 0;
}

char *dup_string(char s[])
{
	int len, i;
	char *p;
	len = strlen(s);

	p = malloc(sizeof(char)*len+1);
	if(p) {
		for(i=0;i<=len;i++) {
			*(p+i) = s[i];
		}
	}
	else
		printf("Errore allocazione memoria\n");
		
	return p;
}

