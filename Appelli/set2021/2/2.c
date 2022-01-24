#include <stdio.h>
#define NR 10
#define NC 10

void erutta(int m[][NC], int x, int y, int nr, int nc)
{
	if(y!=0) {
		if(x!=0&&m[y-1][x-1]<m[y][x]) {
			m[y-1][x-1]++;
		}
		if(m[y-1][x]<m[y][x]) {
			m[y-1][x]++;
		}
		if(x!=nc-1&&m[y-1][x+1]<m[y][x]) {
			m[y-1][x+1]++;
		}
	}
	if(x!=0&&m[y][x-1]<m[y][x]) {
		m[y][x-1]++;
	}
	if(x!=nc-1&&m[y][x+1]<m[y][x]) {
		m[y][x+1]++;
	}
	if(y!=nr-1) {
		if(x!=0&&m[y+1][x-1]<m[y][x]) {
			m[y+1][x-1]++;
		}
		if(m[y+1][x]<m[y][x]) {
			m[y+1][x]++;
		}
		if(x!=0&&m[y+1][x+1]<m[y][x]) {
			m[y+1][x+1]++;
		}
	}

	m[y][x] += 2;
}

int main(void)
{
	int i, j, coox, cooy, Mat[NR][NC];

	for(i=0;i<NR;i++) {
		for(j=0;j<NC;j++) {
			printf("Inserire elemento [%d][%d]: ", i, j);
			scanf("%d", &Mat[i][j]);
		}
	}
	printf("Inserire coordinata orizzontale: ");
	scanf("%d", &coox);
	printf("Inserire coordinata verticale: ");
	scanf("%d", &cooy);
	erutta(Mat, coox, cooy, NR, NC);

	for(i=0;i<NR;i++) {
		for(j=0;j<NC;j++) {
			printf("%d ", Mat[i][j]);
		}
		printf("\n");
	}

	return 0;
}
