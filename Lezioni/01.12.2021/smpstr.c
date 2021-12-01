#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int n;
	if(argc==3) {
		n = atoi(argv[1]);
		printf("%s\n", argv[0]);
		while(n>0) {
			printf("%s\n", argv[2]);
			n--;
		}
	}
	else
		printf("Errore sitassi (programma intero stringa\n");

	return 0;
}
