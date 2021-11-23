#include <stdio.h>
#define NES 3
#define DIM 30
#define LEN 30

typedef struct {
	char nome[LEN+1];
	int voto;
} Exam;

typedef struct {
	int codp;
	Exam esami[NES];
} Student;

void stampa_voti(Student *p, int n, int codp);

int maxmed(Student *p, int n);

int main(void)
{
	Student studenti[DIM];
	int i, j, n, codp, maxstud;
	
	do {
		printf("Inserisci numero studenti: ");
		scanf("%d", &n);
	}while(n<=0||n>DIM);

	for(i=0;i<n;i++) {
		printf("Inserisci codice persona stud %d: ", i+1);
		scanf("%d", &studenti[i].codp);
		for(j=0;j<NES;j++) {
			printf("Inserisci nome esame %d: ", j+1);
			scanf("%30s", studenti[i].esami[j].nome);
			do {
				printf("Inserisci voto esame %d; ", j+1);
				scanf("%d", &studenti[i].esami[j].voto);
			}while(studenti[i].esami[j].voto<1 || studenti[i].esami[j].voto>30);
		}
	}

	printf("Inserisci codice persona: ");
	scanf("%d", &codp);

	stampa_voti(studenti, n, codp);

	maxstud = maxmed(studenti, n);

	printf("Studente con la media più alta: %d\n", maxstud);

	return 0;
}

void stampa_voti(Student *p, int n, int codp)
{
	int i, j, stampato;
	stampato = 0;
	for(i=0;i<n && !stampato;i++) {
		if(codp==(*(p+i)).codp) {
			for(j=0;j<NES;j++) {
				printf("Esame %d: %s\nVoto: %d\n", j+1, (*(p+i)).esami[j].nome, (*(p+i)).esami[j].voto);
			}
			printf("\n");
			stampato =  1;
		}
	}
}

int maxmed(Student *p, int n)
{
	int max, codmax, tmed, i, j;
	max = 0;
	codmax = 0;

	for(i=0;i<n;i++) {
		tmed = 0;
		for(j=0;j<NES;j++){
			tmed += (*(p+i)).esami[j].voto;
		}
		tmed /= NES;
		if(i==0 || tmed>max) {
			max = tmed;
			codmax = (*(p+i)).codp;
		}
	}

	return codmax;
}

