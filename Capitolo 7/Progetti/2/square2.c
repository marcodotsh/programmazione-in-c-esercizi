#include <stdio.h>

int main(void)
{
  int i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);
  scanf("%*c");

  for (i = 1; i <= n; i++) {
    printf("%d\t%d\n", i, i * i);
  	if(i%24==0) {
		printf("Press ENTER to continue...");
		while(getchar() != '\n');
	}
	
  }

  return 0;
}
