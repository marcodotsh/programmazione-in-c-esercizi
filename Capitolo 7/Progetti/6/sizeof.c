#include <stdio.h>

int main(void)
{
	printf (
			"Size of:\n- Int: %lu;\n- Short: %lu;\n- Long: %lu;\n- Float: %lu;\n- Double: %lu;\n- Long double: %lu;\n",
			sizeof(int),
			sizeof(short int),
			sizeof(long int),
			sizeof(float),
			sizeof(double),
			sizeof(long double)			
	);
	
	return 0;
}

