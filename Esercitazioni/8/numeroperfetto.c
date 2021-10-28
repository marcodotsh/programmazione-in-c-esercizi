#include <stdio.h>
#include <math.h>
#define DIM 10 

int nperfetto(int);
int narmstrong(int);

int main(void)
{
	int n, i, maxperf, maxarm;
	int num[DIM];
	
	maxperf = 0;
	maxarm = 0;
	do {
		printf("Quanti valori vuoi inserire?(max10) ");
		scanf("%d", &n);
	}while(n<=0||n>10);
	
	for(i=0;i<n;i++) {
		printf("Inserisci numero: ");
		scanf("%d", &num[i]);
	}

	for(i=0;i<n;i++){
		if(nperfetto(num[i])){
			if(num[i]>maxperf) {
				maxperf = num[i];
			}
		}

		if(narmstrong(num[i])){
			if(num[i]>maxarm) {
				maxarm = num[i];
			}
		}
	}

	if(maxperf==0)
	{
		printf("Non ci sono numeri perfetti!\n");
	}
	else
	{
		printf("Numero perfetto massimo: %d\n", maxperf);
	}

	if(maxarm==0)
	{
		printf("Non ci sono numeri di Armstrong!\n");
	}
	else
	{
		printf("Numero di Armstrong massimo: %d\n", maxarm);
	}

	return 0;
}

int nperfetto(int n)
{
	int sommadiv, div;
	sommadiv = 1;
	div = 2;

	while(div<=n/2) {
		if(n%div==0) {
			sommadiv += div;
		}
		div++;
	}

	if(sommadiv == n)
		return 1;
	else
		return 0;
}

int narmstrong(int n)
{
	int len, somma, tempn, ultimacifra;
	
	tempn = n;
	somma = 0;
	len=0;

	while(tempn>0) {
		len++;
		tempn /= 10;
	}
	
	tempn = n;

	while(tempn>0) {
		ultimacifra = tempn % 10;
		somma += pow(ultimacifra, len);
		tempn /= 10;
	}
	
	if(somma==n)
		return 1;
	else
		return 0;
}
