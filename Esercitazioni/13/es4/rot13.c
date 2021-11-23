#include <stdio.h>

#define NUM_LET 26
#define KEY 13

int main(void)
{
	FILE *fp_in;
	FILE *fp_out;
	char temp;

	fp_in = fopen("input.txt", "r");
	fp_out = fopen("output.txt", "w");

	if(fp_in && fp_out) {
		while(fscanf(fp_in, "%c", &temp)==1) {
			if(temp>='A'&&temp<('A'+NUM_LET)) {
				temp -= 'A';
				temp = (temp + KEY) % NUM_LET;
				temp += 'A';
			}
			fprintf(fp_out, "%c", temp);
		}
		fclose(fp_in);
		fclose(fp_out);
	}
	else
		printf("Errore apertura file\n");

	return 0;
}
