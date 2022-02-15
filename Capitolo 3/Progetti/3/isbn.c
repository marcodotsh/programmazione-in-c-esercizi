#include <stdio.h>

int main(void)
{
	int gs1, gid, pubcode, itemn, checkd;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1, &gid, &pubcode, &itemn, &checkd);

	printf("GS1 prefix: %d\n", gs1);
	printf("Group identifier: %d\n", gid);
	printf("Publisher code: %d\n", pubcode);
	printf("Item number: %d\n", itemn);
	printf("Check digit: %d\n", checkd);
	
	return 0;
}

