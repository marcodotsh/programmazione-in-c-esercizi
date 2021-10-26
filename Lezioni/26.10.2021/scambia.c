#include <stdio.h>

void scambia(int *, int *);

int main(void)
{
	int x, y;

	scanf("%d%d", &x, &y);
	printf("%d %d\n", x, y);
	
	scambia(&x,&y);

	printf("%d %d\n", x, y);

	return 0;
}

void scambia(int * a, int * b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
