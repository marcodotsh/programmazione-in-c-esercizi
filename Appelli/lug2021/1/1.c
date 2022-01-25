#include <stdio.h>

#define DIM 30

int octtodec(char s[])
{
	int res, i, isvalid;

	res = 0;
	isvalid = 1;

	for(i=0;s[i]!='\0'&&isvalid;i++) {
		if(s[i]>='0'&&s[i]<='7') {
			res *= 8;
			res += (s[i] - '0');
		}
		else {
			isvalid = 0;
		}
	}
	if(!isvalid) {
		return -1;
	}

	return res;
}

int main(void)
{
	char s[DIM];
	int dec;
	do{
		printf("Inserire numero positivo in base 8: ");
		scanf("%s", s);
		dec = octtodec(s);
	} while(dec==-1);

	printf("In base 10: %d\n", dec);

	return 0;
}
