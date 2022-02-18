#include <stdio.h>

int main(void) {
	int npay;
	float loan, rate, paym, mthr;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter monthly payment: ");
	scanf("%f", &paym);
	printf("Enter the number of payments: ");
	scanf("%d", &npay);

	mthr = rate / 100 / 12;
	for(;npay>0;npay--) {
		loan -= paym;
		loan *= (1+mthr);
		printf("Balance remaining after first payment: $%.2f\n", loan);
	}

	return 0;
}
