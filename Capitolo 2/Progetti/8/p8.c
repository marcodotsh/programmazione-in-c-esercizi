#include <stdio.h>

int main(void) {
	float loan, rate, paym, mthr;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter monthly payment: ");
	scanf("%f", &paym);

	mthr = rate / 100 / 12;
	
	loan -= paym;
	loan *= (1+mthr);
	printf("Balance remaining after first payment: %.2f\n", loan);
	
	loan -= paym;
	loan *= (1+mthr);
	printf("Balance remaining after second payment: %.2f\n", loan);
	
	loan -= paym;
	loan *= (1+mthr);
	printf("Balance remaining after third payment: %.2f\n", loan);

	return 0;
}
