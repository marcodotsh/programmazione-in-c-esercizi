#include <stdio.h>

#define NR 4
#define NC 8

int calcolaDominanti(int m[][NC], int nr, int nc) {
	int i, j, k, l, isdom, res;
	res = 0;
	for(i=0;i<nr-1;i++) {
		for(j=0;j<nc-1;j++) {
			isdom = 1;
			for(k=i+1;k<nr&&isdom;k++) {
				for(l=j+1;l<nc&&isdom;l++) {
					if(m[i][j]<=m[k][l]) {
						isdom = 0;
					}
				}
			}
			if(isdom) {
				res++;
			}
		}
	}
	
	return res;
}

int main(void)
{
	int arr[NR][NC];
	int i, j, d;

	for(i=0;i<NR;i++) {
		for(j=0;j<NC;j++) {
			printf("Inserisci elemento [%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}

	d = calcolaDominanti(arr, NR, NC);

	printf("Elementi dom: %d\n", d);

	return 0;
}
