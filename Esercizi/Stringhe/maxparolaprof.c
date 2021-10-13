#include <stdio.h>
#include <string.h>
#define DIM 30

int main(void)
{
	char s1[DIM+1];
	int i, len, max;
	max = 0;
	i = 0;
	scanf("%[^\n]", s1);
	while(s1[i]!='\0')
	{
		len = 0;
		while(s1[i]>='a' && s1[i]<='z')
		{
			len++;
			i++;
		}
		if(len>max)
		{
			max = len;
		}
		if(s1[i]!='\0')
		{
			i++;
		}
	}
	
	printf("Il massimo è %d\n", max);

	return 0;
}
