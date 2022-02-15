#include <stdio.h>
#define DIM 4

int main(void)
{
	int m[DIM][DIM], i, j, rows[DIM], cols[DIM], d1, d2;
	
	d1 = 0;
	d2 = 0;
	
	printf("Enter the numbers from 1 to 16 in any order\n");
	
	for(i=0;i<DIM;i++) {
		for(j=0;j<DIM;j++) {
			scanf("%d", &m[i][j]);
		}
		rows[i] = 0;
		cols[i] = 0;
	}
	
	for(i=0;i<DIM;i++) {
		for(j=0;j<DIM;j++) {
			printf("%d\t", m[i][j]);
			rows[i] += m[i][j];
			cols[j] += m[i][j];
		}
		printf("\n");
		d1 += m[i][i];
		d2 += m[DIM-1-i][i];
	}
	
	printf("Row sums: ");
	for(i=0;i<DIM;i++) {
		printf("%d ", rows[i]);
	}
	printf("\n");
	
	printf("Column sums: ");
	for(i=0;i<DIM;i++) {
		printf("%d ", cols[i]);
	}
	printf("\n");

	printf("Diagonal sums: %d %d\n", d1, d2);

	return 0;
}

