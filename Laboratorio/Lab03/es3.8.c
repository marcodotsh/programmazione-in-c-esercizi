#include <stdio.h>
#include <math.h>

#define N 4

typedef struct {
	int x;
	int y;
}point_t;

float dist(point_t a, point_t b);

int regolare(point_t m[][N], int n);

int main(void)
{
	point_t mat[N][N];
	int i,j;
	for(i=0;i<N;i++) {
		for(j=0;j<N;j++) {
			printf("Inserisci coordinate intere punto (%d,%d): ", i, j);
			scanf("%d%d", &mat[i][j].x, &mat[i][j].y); 
		}
	}

	if(regolare(mat, N))
		printf("La matrice è regolare\n");
	else
		printf("La matrice NON è regolare\n");
	
	return 0;
}

float dist(point_t a, point_t b)
{
	float len;

	len = sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));

	return len;
}

int regolare(point_t m[][N], int n)
{
	int reg, i, j;
	float diaglen, collen, riglen;

	reg = 1;
	diaglen = 0;
	collen = 0;
	riglen = 0;

	for(i=0;i<n-1;i++)
		diaglen += dist(m[i][i],m[i+1][i+1]);
	for(i=0;i<n && reg;i++) {
		for(j=0;j<n-1;j++) {
			collen += dist(m[j][i],m[j+1][i]);
			riglen += dist(m[i][j],m[i][j+1]);
		}
		if(collen>diaglen || riglen>diaglen)
			reg = 0;
	}

	return reg;
	
}

