#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("Inserire a: ");
	scanf("%d", &a);
	printf("Inserire b: ");
	scanf("%d", &b);
	printf("Inserire c: ");
	scanf("%d", &c);

	if((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
	{
		printf("I numeri a,b,c sono una terna pitagorica.\n");
	} else
	{
		printf("I numeri a,b,c non sono una terna pitagorica.\n");
	}
	return 0;
}
