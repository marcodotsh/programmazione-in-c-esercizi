#include <stdio.h>

int main(void)
{
	int num, tmp;

	printf("Enter a number: ");
	scanf("%d", &num);

	tmp = 2;

	while(tmp*tmp<=num) {
		printf("%d\n", tmp*tmp);
		tmp += 2;		
	}

	return 0;
}

