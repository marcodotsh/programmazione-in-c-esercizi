#include <stdio.h>
#define LEN 30
int nprimes(int value)
{
	int div, n, res, isprime;
	res = 0;
	for(n=2;n<=value;n++) {
		isprime = 1;
		for(div=2;(div*div)<=n;div++) {
			if(n%div==0) {
				isprime = 0;
			}
		}
		if(isprime) {
			res++;
		}
	}
	return res;
}

int main(void) {
	int tmp;
	FILE *fp_in, *fp_out;
	char filename[LEN+1];
	
	printf("Inserire nome file: ");
	scanf("%s", filename);
	fp_in = fopen(filename, "r");
	fp_out = fopen("risultati.txt", "w");
	if(fp_in && fp_out) {
		while(fscanf(fp_in, "%d", &tmp)>0) {
			fprintf(fp_out, "%d %d\n", tmp, nprimes(tmp));
		}
		fclose(fp_in);
		fclose(fp_out);
		fp_in = NULL;
		fp_out = NULL;
	}
	else {
		printf("Errore apertura file.\n");
	}
	return 0;
}
