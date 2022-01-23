#include <stdio.h>

#define N 4

int primafascia(int Mat[][N], int n, int k)
{
	int i, j, found, flag, res;
	
	found = 0;
	flag = 0;
	res = 0;

	for(i=0;i<n&&!flag;i++) {
		for(j=0;j<n&&!flag;j++) {
			if(Mat[i][j]==k) {
				res++;
				found = 1;
			}
			else if(found) {
				flag = 1;
			}
		}
	}
	return res;
}

int main(void)
{
	int m[N][N];
	int i, j, f;

	for(i=0;i<N;i++) {
		for(j=0;j<N;j++) {
			printf("Inserisci elemento [%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
		}
	}

	printf("Inserisci valore: ");
	scanf("%d", &f);

	printf("Lunghezza prima fascia: %d\n", primafascia(m, N, f));

	return 0;
}
