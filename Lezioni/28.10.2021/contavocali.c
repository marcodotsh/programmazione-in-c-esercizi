#include <stdio.h>
#define N 30

int contavocali(char str[]);

int main(void)
{
	char str[N+1];
	int nv;
	
	printf("Inserire stringa: ");
	scanf(" %[^\n]", str);

	nv = contavocali(str);

	printf("Numero vocali: %d\n", nv);

	return 0;
}

int contavocali(char str[])
{
	int i, ris;
	ris = 0;
	for(i=0;i!='\0';i++) {
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') {
			ris++;
		}		
		printf("%d", ris);	
	}

	return ris;
}
