#include <stdio.h>

int main(void)
{
	int vel;

	printf("Enter wind velocity in knots: ");
	scanf("%d", &vel);

	if(vel>63) {
		printf("Uragano");
	}
	else if(vel>=48) {
		printf("Tempesta");
	}
	else if(vel>=28) {
		printf("Burrasca");
	}
	else if(vel>=4) {
		printf("Brezza");
	}
	else if(vel>=1) {
		printf("Bava di vento");
	}
	else if(vel>=0) {
		printf("Calmo");
	}
	else {
		printf("Illegale");
	}
	
	printf("\n");

	return 0;
}

