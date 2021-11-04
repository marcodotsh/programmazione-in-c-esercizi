#include <stdio.h>
#define DIM 30
#define NSTUD 30

typedef struct
{
	int nmat;
	struct {
		char nome[DIM+1];
		char cognome[DIM+1];
	} stud;
	int pA;
	int pB;
}esame_t;

void minmaxavg(esame_t e[], int n);

void esorale(esame_t e[], int n);

int main(void)
{
	int i;
	esame_t esami[NSTUD];

	for(i=0;i<NSTUD;i++) {
		printf("Inserire numero matricola %d: ", i+1);
		scanf("%d", &esami[i].nmat);
		printf("Inserire nome studente %d: ", i+1);
		scanf("%s", esami[i].stud.nome);
		printf("Inserire cognome studente %d: ", i+1);
		scanf("%s", esami[i].stud.cognome);
		printf("Inserire voti studente %d: ", i+1);
		scanf("%d%d", &esami[i].pA, &esami[i].pB);
	}

	minmaxavg(esami, NSTUD);

	esorale(esami, NSTUD);

	return 0;
}

void minmaxavg(esame_t e[], int n)
{
	int i, min, max;
	float avg;
	min = e[0].pA + e[0].pB;
	max = e[0].pA + e[0].pB;
	avg = 0;
	for(i=0;i<n;i++) {
		if((e[i].pA+e[i].pB)>max) {
			max = e[i].pA+e[i].pB;
		}
		if((e[i].pA+e[i].pB)<min) {
			min = e[i].pA+e[i].pB;
		}
		avg = avg + e[i].pA+e[i].pB;
	}
	avg = avg / n;

	printf("\nMin: %d\nMax: %d\nAvg: %f\n", min, max, avg);
}

void esorale(esame_t e[], int n)
{
	int i;
	for(i=0;i<n;i++) {
		if((e[i].pA+e[i].pB)>=18) {
			if(e[i].pA<=8) {
				printf("%s %s A\n", e[i].stud.nome, e[i].stud.cognome);
			}
			if(e[i].pB<=8) {
				printf("%s %s B\n", e[i].stud.nome, e[i].stud.cognome);
			}
		}
	}
}
