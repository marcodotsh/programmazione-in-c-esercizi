#include <stdio.h>
#define GA 10
#define GB 20
#define DATE_LEN 8

int main(void)
{	
	int a, b, tota, totb;
	char date[DATE_LEN+1];
	FILE *fi, *fo;
	fi = fopen("vendite.txt", "r");
	fo = fopen("guadagniGiornalieri.txt", "w");
	tota = 0;
	totb = 0;	

	if(fi && fo) {
		while(fscanf(fi, "%s %d %d", date, &a, &b) > 0) {
			tota += a;
			totb += b;
			fprintf(fo, "%s %d\n", date, GA*a+GB*b);
		}
		fclose(fi);
		fclose(fo);
		fi = NULL;
		fo = NULL;
		printf("Vendite totali A: %d\nVendite totali B: %d\n", tota, totb);
	}
	else
		printf("Errore apertura dei files\n");
	
	return 0;
}
