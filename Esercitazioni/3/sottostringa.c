#include <stdio.h>
#include <string.h>
#define MAX 30

int main(void)
{
	char parola1[MAX+1], parola2[MAX+1];
	int corretto;
	int i, j, len1, len2;

	corretto = 0;

	printf("Inserire parola 1: ");
	scanf("%s", parola1);

	printf("Inserire parola 2: ");
	scanf("%s", parola2);

	len1 = strlen(parola1);
	len2 = strlen(parola2);

	if(len1>=len2)
	{
		for(i=0;i<len1+1-len2&&corretto==0;i++)
		{
			if(parola2[0]==parola1[i])
			{
				corretto = 1;
				for(j=1;j<len2&&corretto==1;j++)
				{
					if(parola2[j]!=parola1[i+j])
					{
						corretto = 0;
					}
				}
			}
		}

	}

	if(corretto)
	{
		printf("parola 2 e' sottostringa di parola 1\n");
	}else
	{
		printf("parola 2 NON e' sottostringa di parola 1\n");	
	}

	return 0;
}
