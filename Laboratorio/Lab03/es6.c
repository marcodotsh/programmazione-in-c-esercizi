#include <stdio.h>
#include <string.h>

#define LEN 30

int asciiToInt(char s[]);

int main(void)
{
	char str[LEN+1];
	int num;

	printf("Inserisci numero in base 10: ");
	scanf("%30s", str);

	num = asciiToInt(str);

	if(num!=-1)
		printf("Conversione a intero: %d\n", num);
	else
		printf("Quanto inserito non è un numero.\n");

	return 0;
}

int asciiToInt(char s[])
{
	int i, n, isnum;
	isnum = 1;
	
	for(i=0, n=0;s[i]!='\0' && isnum;i++) {
		n *= 10;
		if(s[i]>='0' && s[i]<='9') {
			n += s[i] - '0';
		}
		else
			isnum = 0;
	}

	if(isnum)
		return n;
	else
		return -1;
}

