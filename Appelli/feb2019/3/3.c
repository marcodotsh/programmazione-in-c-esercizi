#include <stdio.h>
#include <string.h>
#define LEN 50

char* longestword(char s[])
{
	int max, tmax, i, len, flag;
	
	char *res;
	tmax = 0;
	max = 0;
	flag = 0;
	len = strlen(s);
	for(i=0;i<=len;i++) {
		if(s[i]==' '||s[i]=='\0') {
			if(tmax>max) {
				max = tmax;
			}
			tmax = 0;
		}
		else {
			tmax++;
		}
	}
	res = &s[0];
	for(i=0;i<=len&&!flag;i++) {
		if(s[i]==' '||s[i]=='\0') {
			if(tmax==max) {
				flag = 1;
			}
			else {
				tmax = 0;
				res = &s[i+1];
			}
		}
		else {
			tmax++;
		}
	}
	return res;
}

int main(void) {
	int i;
	char *wp;
	char string[LEN+1];
	
	printf("Inserisci una frase:\n");
	scanf("%[^\n]", string);

	wp = longestword(string);

	printf("La parola più lunga è: ");
	for(i=0;*(wp+i)!=' '&&*(wp+i)!='\0';i++) {
		printf("%c", *(wp+i));
	}
	printf("\n");

	return 0;
}
