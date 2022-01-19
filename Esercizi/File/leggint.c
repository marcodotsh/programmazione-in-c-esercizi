#include <stdio.h>

#define LEN 30

int main(void)
{
	char path[LEN+1];
	int tmp;
	FILE *fp;

	printf("File da leggere: ");
	scanf("%30s", path);

	fp = fopen(path, "r");
	if(fp) {
		while(fscanf(fp, "%d", &tmp)>0) {
			printf("%d\n", tmp);
		}
	}
	else
		printf("Errore apertura file\n");
	
	return 0;
}
