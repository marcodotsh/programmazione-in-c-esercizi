/* Congettura di Goldbach: ogni numero pari >2 può essere scritto come somma di due numeri primi */
#include <stdio.h>

int primo(int);

int main(void)
{
	int n, i;

	do
	{
		printf("Inserire numero pari >2: ");
		scanf("%d", &n);
	}while(n%2!=0 && n<=2);

	for(i=2;i<=n/2;i++)
	{
		if(primo(i) && primo(n-i))
		{
			printf("%d = %d + %d\n", n, i, n-i);
		}
	}

	return 0;
}

int primo(int x)
{
	int flag, i;
	if(x>=2)
	{
		flag = 1;
		for(i=2;i*i<=x && flag;i++)
		{
			if(x%i==0)
			{
				flag = 0;
			}
		}
	}else
	{
		flag=0;
	}

	return flag;
}
