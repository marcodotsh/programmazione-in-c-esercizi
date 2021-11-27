#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SMAX 50
#define N 5

char *concatena(char *ls[], int n);

int main(void)
{	
	int i, len;
	char *l_str[N], *concat;
	char tmp[SMAX];

	for(i=0;i<N;i++) {
		printf("Inserire stringa %d: ", i);
		scanf("%s", tmp);
		len = strlen(tmp);
		l_str[i] = malloc(sizeof(char)*(len+1));
		if(l_str[i]) {
			strcpy(l_str[i], tmp);
		}
	}
	
	concat = concatena(l_str, N);
	if(concat) {
		printf("Stringa concatenata: %s\n", concat);
		free(concat);
	}
	else
		printf("Errore allocazione\n");
	
	for(i=0;i<N;i++)
		free(l_str[i]);

	return 0;
}

char *concatena(char *ls[], int n)
{
	int i, lung;
	char *res;
	lung = 0;
	for(i=0;i<n;i++) {
		lung += strlen(ls[i]);
	}
	res = (char *) malloc(sizeof(char) * (lung + 1));
	if(res) {
		res[0] = '\0';
		for(i=0;i<n;i++) {
			strcat(res, ls[i]);
		}
	}

	return res;
}
