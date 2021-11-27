#include <stdio.h>

int main(void) {
	int g, m, a;
	
	printf("Enter a date: (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &g, &m, &a);

	printf("%.4d%.2d%.2d\n", a, m, g);

	return 0;
}

