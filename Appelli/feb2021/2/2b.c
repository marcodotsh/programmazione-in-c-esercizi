#include <stdio.h>

#define N 4

int maxfascia(int Mat[][N], int n, int k)
{
	int i, j, found, tmp, res;
	
	found = 0;
	tmp = 0;
	res = 0;

	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(Mat[i][j]==k) {
				tmp++;
				found = 1;
			}
			else if(found) {
				if(tmp>res) {
					res = tmp;
				}
				tmp = 0;
				found = 0;
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

	printf("Lunghezza fascia max: %d\n", maxfascia(m, N, f));

	return 0;
}
