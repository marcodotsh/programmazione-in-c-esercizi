#include <stdio.h>

#define LEN 30

int main(void)
{
	char path[LEN+1];
	int n, tmp;
	FILE *fp;

	printf("Nome file da aprire: ");
	scanf("%30s", path);
	
	fp = fopen(path, "w");
	if(fp) {	
		do {
			printf("Quanti int inserire? ");
			scanf("%d", &n);
		} while(n<=0);
	
		printf("Inserire i numeri:\n");
		while(n>0) {
			scanf("%d", &tmp);
			fprintf(fp, "%d\n", tmp);
			n--;
		}
		fclose(fp);
		fp = NULL;
	}
	else
		printf("Errore apertura file");
	return 0;
}
