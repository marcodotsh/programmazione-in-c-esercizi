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
	if(n==0)
		return 1;
	else
		return n*fatt_ric(n-1);
}
