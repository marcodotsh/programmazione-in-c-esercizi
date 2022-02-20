#include <stdio.h>
#include <math.h>

int main(void)
{
	float x, y, oy;
	
	y = 1;

	do {
		printf("Enter a positive number: ");
		scanf("%f", &x);
	}while(x<=0);

	do {
		oy = y;
		y = (y + x/y) / 2;
	}while(fabs(y-oy)>=0.00001*y);

	printf("The square root is: %f\n", y);

	return 0;
}

