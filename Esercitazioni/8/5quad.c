#include <stdio.h>
#define CAR '*'
#define NUMEROCICLI 5

void stampaq(int);

int main(void)
{
	int lato, i;
	
	for(i=0;i<NUMEROCICLI;i++)
	{
		printf("Inserisci lato quadrato %d: ", i+1);
		scanf("%d", &lato);
		
		stampaq(lato);
	}

	return 0;
}

void stampaq(int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0 || i==n-1 || j==0 || j==n-1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}
