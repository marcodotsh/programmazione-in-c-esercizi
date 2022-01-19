#include <stdio.h>

int main(void)
{
	int n;
	FILE *fp;

	fp = fopen("ciao.txt", "r");
	if(fp) {
		while(fscanf(fp, "%d", &n)>0) {
			printf("%d ", n);
		}
		printf("\n");
		fclose(fp);
		fp = NULL;
	}
	else
		printf("Errore apertura file\n");
	
	return 0;
}
