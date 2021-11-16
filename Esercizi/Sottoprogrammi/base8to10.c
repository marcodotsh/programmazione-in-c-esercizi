#include <stdio.h>
#include <string.h>
#define LEN 30

int base8to10(char s[]);

int main(void)
{
	char str[LEN+1];
	int num;

	printf("Inserisci numero in base 8: ");
	scanf("%s", str);

	num=base8to10(str);

	if(num!=-1)
		printf("%s in base 10 è: %d\n", str, num);
	else
		printf("In numero inserito non è in base 8.\n");
	
	return 0;
}

int base8to10(char s[])
{
	int ris, len, i;
	
	len = strlen(s);
	ris = 0;

	for(i=0;i<len;i++) {
		if(s[i]<'0' || s[i]>'7')
			return -1;
		ris *= 8;
		ris += (s[i] - '0');
	}

	return ris;
}

