#include <stdio.h>
int main(void)
{
	char car;
	scanf("%c", &car);
	while(car >= 'a' && car <= 'z')
	{
		if (car == 'z')
		{
			car = 'a';
		}
		else
		{
			car = car + 1;
		}
		printf("Output %c\n", car);

		scanf("%c", &car);
	}
	return 0;
}
