#include <stdio.h>
#include "def.h"

void redHello(void);

void greenHello(void);

int main(void)
{
	redHello();
	greenHello();
	printf("\n");

	return 0;
}

void redHello(void)
{
	printf("%sHELLO%s", REDT, reset);
}

void greenHello(void)
{
	printf("%sHELLO%s", GRNT, reset);
}
