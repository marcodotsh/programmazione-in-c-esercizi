#include <stdio.h>

int aree(char fname[], float *area)
{
	FILE *fp;
	int riga, base, base2, altezza, flag;
	float tmp;

	riga = 1;
	*area = 0;
	flag = 0;
	fp = fopen(fname, "r");
	if(fp) {
		fscanf(fp, "%d %d", &base, &altezza);
		while(!feof(fp)) {
			if(riga % 2 == 0) {
				base += base2;
			}
			tmp = base*altezza/2.0;
			if(tmp>*area) {
				*area = tmp;
			}
			riga++;
			if(riga % 2) {
				fscanf(fp, "%d %d", &base, &altezza);
			}
			else {
				fscanf(fp, "%d %d %d", &base, &base2, &altezza);
			}
		}

		riga = 1;
		rewind(fp);
		fscanf(fp, "%d %d", &base, &altezza);
		while(!feof(fp) && !flag) {
			if(riga % 2 == 0) {
				base += base2;
			}
			tmp = base*altezza/2.0;
			if(tmp==*area) {
				flag = 1;
			}
			riga++;
			if(riga%2) {
				fscanf(fp, "%d %d", &base, &altezza);
			}
			else {
				fscanf(fp, "%d %d %d", &base, &base2, &altezza);
			}
		}
		fclose(fp);
		fp = NULL;
	}
	else {
		*area = -1;
		return -1;
	}

	return (riga-1);
}

int main(int argc, char *argv[])
{
	int riga;
	float area;

	if(argc!=2) {
		printf("Errore sintassi Usare ./a.out nomefile\n");
	}
	else {
		riga = aree(argv[1], &area);
		if(riga!=-1) {
			printf("Riga: %d\nArea: %f\n", riga, area);
		}
		else {
			printf("Errore apertura file\n");
		}
	}

	return 0;
}
