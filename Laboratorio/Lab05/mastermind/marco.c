#include <stdio.h>
#include <stdlib.h>
#include "mastermind.h"

char* strmalloc(int len)
{
	char* res;
	res = malloc(sizeof(char)*(len+1));
	if(!res) {
		printf("Memory allocation error.\n");
	}

	return res;
}

void checkSequence(char secr[], char curr[], int len, int *white, int *black)
{
	int i, j, flag, found[len];

	for(i=0;i<len;i++) {
		found[i] = 0;
	}

	flag = 0;

	for(i=0;i<len;i++) {
		if(curr[i]==secr[i]) {
			(*black)++;
			flag = 1;
			found[i] = 1;
		}
		for(j=0;j<len && !flag;j++) {
			if(curr[i]==secr[j] && !found[j]) {
				(*white)++;
				flag = 1;
				found[j] = 1;
			}
		}
	}
}
