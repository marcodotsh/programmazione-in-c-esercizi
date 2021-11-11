#include <stdio.h>

int fatt_ric(int n);

int main(void)
{
	int num, f;

	printf("Inserire numero intero positivo: ");
	scanf("%d", &num);

	f=fatt_ric(num);

	printf("\n%d! = %d\n\n", num, f);

	return 0;
}

int fatt_ric(int n)
{
	int fr;

	if(n==0) {
		fr=1;
	}
	else {
		fr=n*fatt_ric(n-1);
	}

	return fr;
}
