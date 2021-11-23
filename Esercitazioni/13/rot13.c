#include <stdio.h>

#define NUM_LET 26
#define KEY 13

int main(void)
{
	FILE *fp_in;
	FILE *fp_out;
	char temp, converted;
	int idx;

	fp_in = fopen("input.txt", "r");
	fp_out = fopen("output.txt", "w");

	if(fp_in && fp_out) {
		fscanf(fp_in, "%c", &temp);
		while(!feof(fp_in)) {
			idx = temp - 'A';
			if(idx>=0&&idx<NUM_LET) {
				converted = (idx + KEY) % NUM_LET;
				converted += 'A';
			}
			fprintf(fp_out, "%c", converted);
		}
		fclose(fp_in);
		fclose(fp_out);
	}
	else
		printf("Errore apertura file\n");

	return 0;
}
