#include <stdio.h>

int main(void)
{
	int itemn;
	float unitp;
	int day, month, year;

	printf("Enter item number: ");
	scanf("%d", &itemn);

	printf("Enter unit price: ");
	scanf("%f", &unitp);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &day, &month, &year);

	printf("\n");
	printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
	printf("%d\t$%.2f\t%d/%d/%d\n", itemn, unitp, day, month, year);

	return 0;
}

