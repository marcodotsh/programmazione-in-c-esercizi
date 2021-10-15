#include <stdio.h>
#include <string.h>
#define DIM 10
int main(void)
{
	char bin[DIM+1];
	int i, len, decimale, flag;
	
	flag = 1;
	decimale = 0;

	printf("Inserire numero binario: ");
	scanf("%s", bin);

	len = strlen(bin);

	for(i=0;i<len && flag;i++)
	{
		if(bin[i]!='0' && bin[i]!='1')
		{	flag = 0;	}

	}

	if(!flag)
	{	
		printf("Il numero inserito non è binario :(\n");	
	}else
	{
		for(i=0;i<len;i++)
		{
			if(bin[i] == '1')
			{
				decimale = decimale * 2 + 1;
			}else
			{
				decimale = decimale * 2;
			}
		}
		printf("Numero in decimale: %d\n", decimale);
	}	

	return 0;
}
