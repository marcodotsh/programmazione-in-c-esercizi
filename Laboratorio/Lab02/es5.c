#include <stdio.h>
#define DIM 20

typedef int vett_t[DIM];

int main(void)
{
	int i, j, len, isduplicato;
	vett_t a, ris;
	len = 0;

	for(i=0;i<DIM;i++) {
		printf("Inserire valore %d: ", i+1);
		scanf("%d", &a[i]);
	}
	
	printf("\nA:\n");
	for(i=0;i<DIM;i++) {
		printf("%d ", a[i]);
	}

	for(i=0;i<DIM;i++) {
		isduplicato = 0;
		for(j=0;j<i && !isduplicato;j++) {
			if(a[i] == a[j])
				isduplicato = 1;
		}
		if(!isduplicato) {
			ris[len] = a[i];
			len++;
		}
	}
	
	printf("\nRisultato:\n");
	for(i=0;i<len;i++) {
		printf("%d ", ris[i]);
	}
	printf("\nLunghezza: %d\n", len);

	return 0;
}
