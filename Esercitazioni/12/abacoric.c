#include <stdio.h>
#include <math.h>

void stampariga(int n);

void abaric(int n, int len);

int main(void)
{
	int num, len;
	do{
		printf("Inserisci numero: ");
		scanf("%d", &num);
		if(num!=0) {
			len = 0;
			while(num/(int)pow(10,len)!=0)
				len++; 
			abaric(num, len);
		}
	}while(num!=0);

	return 0;
}

void stampariga(int n)
{
	if(n!=0) {
		printf("o");
		stampariga(n-1);
	}
	else {
		printf("\n");
	}
}

void abaric(int n, int len)
{
	if(len!=0) {
		int cifra;
		cifra = (n / (int)pow(10,len-1)) % 10;
		stampariga(cifra);
		abaric(n, len-1);
	}
}

