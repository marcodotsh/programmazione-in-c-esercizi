/* Max short: 7
 * Max int: 12
 * Max long: 20
 * Max long long: 20
 * Max float: 13 exactly, 34 with approximation
 * Max double: 22 exactly, 170 with approximation 
 * Max long double: 25 exactly, 1755 with approximation 
*/

#include <stdio.h>

int main(void)
{
	long double fact;
	int num;

	fact = 1;

	printf("Enter a positive integer: ");
	scanf("%d", &num);

	while(num>=2) {
		fact *= num--;
	}

	printf("Factorial: %Lg\n", fact);

	return 0;
}

