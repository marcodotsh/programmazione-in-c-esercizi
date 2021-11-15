#include <stdio.h>
#define DIM 64

void initgame(int a[],int b[],int c[],int n);

void printgame(int a[],int b[],int c[],int n);

void solvegame(int a[], int b[], int c[], int n, int *i1, int *i2, int *i3);

void movedisk(int a[], int b[], int *i1, int *i2);

int main(void)
{
	int pila1[DIM+1], pila2[DIM+1], pila3[DIM+1];
	int ndisks, indexp1, indexp2, indexp3;

	do {
		printf("Inserire numero dischi: ");
		scanf("%d", &ndisks);
	}while(ndisks<1||ndisks>DIM);
	
	indexp1 = ndisks-1;
	indexp2 = -1;
	indexp3 = -1;

	initgame(pila1, pila2, pila3, ndisks);

	printgame(pila1, pila2, pila3, ndisks);

	solvegame(pila1, pila2, pila3, ndisks, &indexp1, &indexp2, &indexp3);

	printgame(pila1, pila2, pila3, ndisks);
	
	return 0;
}

void initgame(int a[],int b[],int c[],int n)
{
	int i;
	for(i=0;i<DIM;i++) {
		a[i]=0;
		b[i]=0;
		c[i]=0;
	}
	
	for(i=0;n-i>0;i++) {
		a[i]=n-i;
	}
}

void printgame(int a[],int b[],int c[],int n)
{
	int i;
	for(i=0;i<=n;i++) {
		printf("\t %d\t %d\t %d\t\n", a[n-i], b[n-i], c[n-i]);
	}
	printf("\tpila1\tpila2\tpila3\t\n");
}

void solvegame(int a[], int b[], int c[], int n, int *i1, int *i2, int *i3)
{
	if(n==1) {
		movedisk(a, c, i1, i3);
	}
	else {
		solvegame(a, c, b, n-1, i1, i3, i2);
		movedisk(a, c, i1, i3);
		solvegame(b, a, c, n-1, i2, i1, i3);
	}
}

void movedisk(int a[], int b[], int *i1, int *i2)
{
	b[*i2+1] = a[*i1];
	a[*i1] = 0;
	(*i1)--;
	(*i2)++;
}

