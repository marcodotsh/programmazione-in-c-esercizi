#include <stdio.h>
#define DIM 10

void riempia(int a[], int n);

int check_arr(int a[], int b[], int n);

int main(void)
{
	int a1[DIM], a2[DIM], spost;

	riempia(a1, DIM);
	riempia(a2, DIM);

	spost = check_arr(a1, a2, DIM);

	if(spost!=-1)
		printf("I due array sono uguali spostando il secondo di %d a destra\n", spost);
	else
		printf("I due array non sono uguali.\n");	

	return 0;
}

void riempia(int a[], int n)
{
	int i;
	for(i=0;i<n;i++) {
		printf("Inserisci elemento %d: ", i);
		scanf("%d" , &a[i]);
	}
}

int check_arr(int a[], int b[], int n)
{
	int i, j, arequal, ris;
	arequal = 0;

	for(i=0;i<n && !arequal;i++) {
		arequal = 1;
		for(j=0;j<n && arequal;j++) {
			if(a[j]!=b[(i+j)%n])
				arequal = 0;
		}
	}
	if(arequal) {
		i--;
		ris = n-i;
		return ris;
	}
	else
		return -1;
}

