#include <stdio.h>
#include <string.h>
#define LEN 30

int verifica(char s[]);

int main(void)
{
	char str[LEN+1];
	
	printf("Inserisci password: ");
	scanf("%s", str);

	if(verifica(str)) {
		printf("Password valida.\n");
	}
	else {
		printf("Password non valida.\n");
	}

	return 0;
}

int verifica(char s[])
{
	int hasAdigit, hasAsymbol, threeconschars;
	int i, efflen;

	efflen = strlen(s);
	hasAdigit = 0;
	hasAsymbol = 0;
	threeconschars = 0;

	for(i=0;s[i]!='\0';i++) {
		if(s[i]>='0'&&s[i]<='9') {
			hasAdigit = 1;
		}
		if(!((s[i]>='0'&&s[i]<='9') || (s[i]>='A'&&s[i]<='Z') || (s[i]>='a'&&s[i]<='z'))) {
			hasAsymbol = 1;
		}
	}

	for(i=0;i<=efflen-2 && !threeconschars;i++){
		if(s[i]==s[i+1]&&s[i]==s[i+2]) {
			threeconschars = 1;
		}
	}


	if(hasAdigit && hasAsymbol && efflen >= 8 && !threeconschars)
		return 1;
	else
		return 0;
}

