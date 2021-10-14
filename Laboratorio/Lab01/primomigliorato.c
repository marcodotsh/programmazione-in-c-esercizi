#include <stdio.h>

int main(void)
{
	int i, n, flag;
	
	flag = 0;

	printf("Inserisci un numero intero: ");
	scanf("%d", &n);

	if(n == 1)
	{
		printf("1 non è nè primo nè composto\n");
	} else
	{
		i = 2;
		while(i <= n / 2 && !flag) 
		{
			if(n%i == 0)
			{
				flag = 1;
			}
			i = i + 1;		
		}
		
		if(flag == 0)
		{
			printf("%d è primo\n", n);
		} else
		{
			printf("%d NON è primo\n", n);
		}
	}
	return 0;
}

