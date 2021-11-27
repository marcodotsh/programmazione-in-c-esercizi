#include <stdio.h>

int main(void) {
	int imp, n20, n10, n5, n1;
	
	printf("Enter a dollar amount: ");
	scanf("%d", &imp);
	n20 = imp / 20;
	imp -= 20*n20;
	n10 = imp / 10;
	imp -= 10*n10;
	n5 = imp / 5;
	imp -= 5*n5;
	n1 = imp;
	printf("$20 bills: %d\n", n20);
	printf("$10 bills: %d\n", n10);
	printf("$5 bills: %d\n", n5);
	printf("$1 bills: %d\n", n1);
	
	return 0;
}
