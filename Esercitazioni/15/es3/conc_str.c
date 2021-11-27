#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 5
#define LEN 30

char *conc_str(char s[][LEN+1], int dim);

int main(void)
{
	char a[N][LEN+1], *str;
	int i;
	for(i=0;i<N;i++) {
		printf("Riga %d: ", i);
		scanf("%s", a[i]);
	}
	
	str = conc_str(a, N);
	if(str)	
		printf("Stringa concatenata: %s\n", str);

	return 0;
}

char *conc_str(char s[][LEN+1], int dim)
{
	int i, j, len;
	char *ris;
	len = 0;
	for(i=0;i<dim;i++) {
		len += strlen(s[i]);
	}
	
	ris = malloc(sizeof(char) * len+1);
	if(ris) {
		len=0;
		for(i=0;i<dim;i++) {
			for(j=0;s[i][j]!='\0';j++) {
				*(ris+len) = s[i][j];
				len++;
			}
		}
		*(ris+len) = '\0';
	}

	return ris;
}
