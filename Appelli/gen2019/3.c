#include <stdio.h>
#include <string.h>

#define MAXLEN 30

void genera(char s[], int pos)
{
	if(s[pos]=='\0') {
		printf("%s\n",s);
		return;
	}
	if(s[pos]=='x'){
		char s1[MAXLEN], s2[MAXLEN];
		strcpy(s1,s);
		strcpy(s2,s);
		s1[pos] = '0';
		genera(s1,pos+1);
		s2[pos] = '1';
		genera(s2,pos+1);
		return;
	}
	genera(s,pos+1);
	return;
}

int main(void)
{
	char str[MAXLEN];
	printf("Inserisci numero binario con x cifre incognite: ");
	scanf("%s", str);
	genera(str,0);
	return 0;
}
