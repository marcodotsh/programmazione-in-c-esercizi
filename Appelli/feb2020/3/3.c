#include <stdio.h>
#include <string.h>
#define DIM 30

int anagramma(char s[], char t[])
{
	int lens, lent, i, j, res;
	char tmp;
	res = 0;
	lens = strlen(s);
	lent = strlen(t);
	if(lens==lent) {
		for(i=0;i<lens;i++) {
			for(j=0;j<lens-1;j++) {
				if(s[j]>s[j+1]) {
					tmp = s[j];
					s[j] = s[j+1];
					s[j+1] = tmp;
				}
				if(t[j]>t[j+1]) {
					tmp = t[j];
					t[j] = t[j+1];
					t[j+1] = tmp;
				}
			}
		}
		if(strcmp(s,t)==0) {
			res = 1;
		}
	}

	return res;
}

int main(void)
{
	char s1[DIM], s2[DIM];
	int ana;
	printf("Inserisci s1: ");
	scanf("%s", s1);
	printf("Inserisci s2: ");
	scanf("%s", s2);

	ana = anagramma(s1,s2);
	
	if(ana) {
		printf("Le stringhe sono anagrammi!\n");
	}
	else {
		printf("Le stringhe non sono anagrammi...\n");
	}

	return 0;
}
