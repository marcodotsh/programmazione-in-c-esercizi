#include <stdio.h>
#define FILENAME "input.txt"

int frequentDigit(int num)
{
	int digits[10];
	int max, i, flag;
	
	for(i=0;i<10;i++) {
		digits[i] = 0;
	}
	flag = 0;
	max = 0;
	
	while(num!=0) {
		digits[num%10]++;
		num /= 10;
	}
	
	for(i=0;i<10;i++) {
		if(digits[i]>max) {
			max = digits[i];
		}
	}
	for(i=9;i>=0&&!flag;i--) {
		if(digits[i]==max) {
			flag = 1;
		}
	}

	return (i+1);
}

int main(void) {
	FILE *fp;
	int tmp;
	
	fp = fopen(FILENAME, "r");
	if(fp) {
		while(fscanf(fp, "%d", &tmp)>0) {
			printf("Numero letto: %d - Cifra frequente: %d\n", tmp, frequentDigit(tmp));
		}
		fclose(fp);
		fp = NULL;
	}
	else {
		printf("Errore apertura file\n");
	}

	return 0;
}
