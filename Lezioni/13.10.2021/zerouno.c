#include <stdio.h>

int main(void)
{
	int num;

	scanf("%d", &num);
	switch(num)
	{
		case 0:
			printf("Zero\n");
			break;
		case 1:
			printf("Uno\n");
			break;
		default:
			printf("ERRORE\n");
	}

	return 0;
}
