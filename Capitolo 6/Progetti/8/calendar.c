#include <stdio.h>

int main(void)
{
	int days, startd, i;

	printf("Enter number of days in month: ");
	scanf("%d", &days);
	printf("Enter starting day of the week (1=Lun 7=Dom): ");
	scanf("%d", &startd);
	startd--;

	printf(" Lun Mar Mer Gio Ven Sab Dom\n");

	for(i=0;i<startd;i++) printf("    ");
	for(i=1;i<=days;i++) {
		printf("%4d", i);
		if((i+startd)%7==0 || i==days) printf("\n");
	}

	return 0;
}

