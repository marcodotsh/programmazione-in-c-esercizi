#include <stdio.h>

int main(void)
{
	FILE *fp;
	int max, n, tmp;

	fp = fopen("TEST.txt", "r");
	if(fp) {
		if(fscanf(fp, "%d", &max)>0) {
			n = 1;

			while(fscanf(fp, "%d", &tmp)>0) {
				if(tmp > max) {
					max = tmp;
					n = 1;
				}
				else if(tmp == max) {
					n++;
				}
			}
			fclose(fp);
			fp = NULL;
	
			printf("Il massimo è %d e compare %d volte\n", max, n);
		}
	}
	else {
		printf("Errore apertura file\n");
	}
	return 0;
}
