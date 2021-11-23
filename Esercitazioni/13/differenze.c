#include <stdio.h>

int main(void)
{
	int n1, n2;
	FILE *fi, *fo;

	fi = fopen("input.txt", "r");
	if(fi) {
		fo = fopen("output.txt", "w");
		if(fo){
			while(!feof(fi)) {
				fscanf(fi, "%d%d", &n1, &n2);
				fprintf(fo, "%d\n", n1 - n2);
			}
			fclose(fo);
			fclose(fi);
		}
		else
			printf("Errore apertura file di output");
	}
	else
		printf("Errore apertura file di input");

	return 0;
}
