#include <stdio.h>
void maxmin(int a, int b, int * max, int * min);

int main(void)
{
	int x, y, mx, mn;

	scanf("%d%d", &x, &y);

	maxmin(x,y,&mx,&mn);

	printf("%d %d\n", mx, mn);

	return 0;
}

void maxmin(int a, int b, int * max, int * min)
{
	if(a>b)
	{
		*max = a;
		*min = b;
	}else
	{
		*max = b;
		*min = a;
	}
}
