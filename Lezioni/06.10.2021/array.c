#include <stdio.h>
#define DIM 20

int main(void)
{
	int arr[DIM];
	int i;
	for(i=0;i<DIM;i++)
	{
		if(i % 2 == 0)
		{
			arr[i] = 2;
		} else
		{
			arr[i] = 1;
		}
	}

	for(i=0;i<DIM;i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
