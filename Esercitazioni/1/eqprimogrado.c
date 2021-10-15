#include <stdio.h>

int main(void)
{
	float a, b, x;

	printf("Inserire a e b separati da \"_\"");
	scanf("%f_%f", &a, &b);
	if(a != 0)
	{
		x = (float)(- b / a);
		printf("x=%f\n", x);
	}

	else if(b == 0)
	{
		printf("Eq indeterminata");
	}
	else
	{
		printf("Eq impossibile");
	}

	return 0;
}

