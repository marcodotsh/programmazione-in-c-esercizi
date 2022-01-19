#include <stdio.h>
#include "def.h"

#define DIM 30

void yellowStar(void);

void greenTile(void);

int main(void)
{
	int i,j;
	
	for(i=0;i<DIM;i++) {
		for(j=0;j<DIM*2-1;j++) {
			if(j>=DIM-1-i&&j<=DIM-1+i) {
				if(i==0)
					yellowStar();
				else
					greenTile();
			}
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}

void yellowStar(void)
{
	printf("%s*%s", YELT, reset);
}

void greenTile(void)
{
	printf("%s %s", GRNB, reset);
}
