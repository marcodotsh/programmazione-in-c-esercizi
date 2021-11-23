#include <stdio.h>
#include <string.h>

#define MAX_STRINGA 100

void calcola_diff(char *src_path, char *dst_path);

int main(void)
{
	char src_path[MAX_STRINGA], dst_path[MAX_STRINGA];

	printf("Inserire path file di input: ");
	scanf("%100s", src_path);

	printf("Inserire path file di output: ");
	scanf("%100s", dst_path);

	calcola_diff(src_path, dst_path);
	return 0;
}

void calcola_diff(char *src_path, char *dst_path)
{
	int x, y;
	FILE *src_f;
	FILE *dst_f;

	src_f = fopen(src_path, "r");
	dst_f = fopen(dst_path, "w");
	if(!src_f) {
		printf("Errore apertura file input\n");
	}
	else if(!dst_f) {
		printf("Errore apertura file output\n");
	}
	else {
		while(fscanf(src_f, "%d %d", &x, &y)>0) {
			fprintf(dst_f, "%d\n", x-y);
		}
	}
}
