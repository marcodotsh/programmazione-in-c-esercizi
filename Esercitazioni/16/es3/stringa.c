#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 30

char *manipola_stringa(char s[], int k)
{
	char *tmp, lastc;
	int i, len;

	tmp = malloc(sizeof(char)*(k+1));
	if(tmp) {
		len = strlen(s);
		if(k>len) {
			for(i=0;i<len;i++) {
				tmp[i] = s[i];
			}
			lastc = s[i-1];
			for(i=len;i<k;i++) {
				tmp[i] = lastc;
			}

			tmp[i] = '\0';
		}
		else {
			for(i=0;i<k;i++) {
				tmp[i] = s[i];
			}
			tmp[i] = '\0';
		}
	}

	return tmp;
}

int main(void)
{
	char str[LEN+1], *p;
	int num;

	printf("Stringa: ");
	scanf("%[^\n]", str);

	printf("Numero: ");
	scanf("%d", &num);

	p = manipola_stringa(str, num);
	if(p) {
		printf("\nRisultato: %s\n", p);
	}
	else {
		printf("Errore allocazione memoria\n");
	}
	
	return 0;
}
