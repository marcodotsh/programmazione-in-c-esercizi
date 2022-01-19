#include <stdio.h>

int main(void)
{
	int i;
	FILE *fp;

	fp = fopen("ciao.txt", "w");
	if(fp) {
		for(i=0;i<=9;i++) {
			fprintf(fp, "%d ", i);
		}
		fclose(fp);
		fp = NULL;
	}
	else
		printf("Errore apertura file\n");
	
	return 0;
}
