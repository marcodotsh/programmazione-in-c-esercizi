#include <stdio.h>

#define N_OGGETTI 100
#define N_SCATOLE 10
#define MAX_STR 100
#define PESO_CONTAINER 100

typedef struct{
char descrizione[MAX_STR+1];
float peso_per_unita;
int quanti;
int codice;
} t_oggetto;

typedef struct{
t_oggetto oggetti[N_OGGETTI];
int n_oggetti;
char descrizione[MAX_STR+1];
int codice;
} t_scatola;

int quantescatole(t_scatola sc[], int dim, float pcont)
{
	float ptot, pscat;
	int i, j, isfull, nscat;
	ptot = 0.0;
	pscat = 0.0;
	isfull = 0;
	nscat = 0;

	for(i=0;i<dim && !isfull;i++) {
		for(j=0;j<sc[i].n_oggetti;j++) {
			pscat += (sc[i].oggetti[j].peso_per_unita*sc[i].oggetti[j].quanti);
		}
		ptot += pscat;
		if(ptot > pcont) {
			isfull = 1;
		}
		else {
			nscat++;
		}
		pscat = 0.0;
	}

	return nscat;
}

int main(void)
{
	t_scatola scatole[N_SCATOLE];
	float capienza_container;
	int i,j, nscatole;

	for(i=0;i<N_SCATOLE;i++) {
		printf("Scatola %d:\n", i+1);
		printf("Descrizione: ");
		scanf("%s", scatole[i].descrizione);
		printf("Codice: ");
		scanf("%d", &scatole[i].codice);
		printf("Numero oggetti: ");
		scanf("%d", &scatole[i].n_oggetti);
		for(j=0;j<scatole[i].n_oggetti;j++) {
			printf("Oggetto %d:\n", j+1);
			printf("Descrizione: ");
			scanf("%s", scatole[i].oggetti[j].descrizione);
			printf("Codice: ");
			scanf("%d", &scatole[i].oggetti[j].codice);
			printf("Peso per unita': ");
			scanf("%f", &scatole[i].oggetti[j].peso_per_unita);
			printf("Numero unita': ");
			scanf("%d", &scatole[i].oggetti[j].quanti);
		}
	}

	capienza_container = 100.0;

	nscatole = quantescatole(scatole, N_SCATOLE, capienza_container);

	printf("\nScatole in container: %d\n", nscatole);

	return 0;
}
