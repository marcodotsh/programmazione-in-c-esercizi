#include <stdio.h>
#define LEN 40

int nvoc(char s[]);

int main(void)
{
	char c[LEN+1];

	printf("Inserisci stringa: ");
	scanf("%s", c);

	printf("Num vocali: %d\n", nvoc(c));

	return 0;
}

int nvoc(char s[])
{
	int n, i;
	n=0;
	for(i=0;s[i]!='\0';i++) {
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
			n++;
	}

	return n;
}

