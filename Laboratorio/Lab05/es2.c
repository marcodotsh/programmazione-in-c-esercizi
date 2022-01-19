#include <stdio.h>
#include "def.h"

void redTile(void);

void greenTile(void);

int main(void)
{
	redTile();
	greenTile();
	printf("\n");

	return 0;
}

void redTile(void)
{
	printf("%s %s", REDB, reset);
}

void greenTile(void)
{
	printf("%s %s", GRNB, reset);
}
