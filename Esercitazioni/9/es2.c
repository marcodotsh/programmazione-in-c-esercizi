#include <stdio.h>
#include <string.h>
#define DIM 30
#define DIMTARGA 7
#define MAXAUTO 50

typedef struct
{
	char piva[DIM+1];
	char nome[DIM+1];
	char cognome[DIM+1];
}gestore_t;

typedef struct
{
	char modello[DIM+1];
	char targa[DIMTARGA+1];
	struct {
		int mese;
		int anno;
	} immat;
}automobile_t;

typedef struct
{
	int codice;
	gestore_t gestore;
	automobile_t aut[MAXAUTO];
	int numauto;
}concessionario_t;

void autoanno(concessionario_t c[], int n, int aa);

int main(void)
{
	int anno;
	concessionario_t con[1];
	
	con[0].codice = 145562;
	strcpy(con[0].gestore.piva, "iu48yo7y90u32");
	strcpy(con[0].gestore.nome, "Mario");
	strcpy(con[0].gestore.cognome, "Rossi");
	strcpy(con[0].aut[0].modello, "Corolla");
	strcpy(con[0].aut[0].targa, "IH749UT");
	con[0].aut[0].immat.mese = 3;
	con[0].aut[0].immat.anno = 2021;
	strcpy(con[0].aut[1].modello, "Captur");
	strcpy(con[0].aut[1].targa, "AZ69UT");
	con[0].aut[1].immat.mese = 5;
	con[0].aut[1].immat.anno = 2021;
	strcpy(con[0].aut[2].modello, "Fiesta");
	strcpy(con[0].aut[2].targa, "SS000SS");
	con[0].aut[2].immat.mese = 2;
	con[0].aut[2].immat.anno = 2020;
	con[0].numauto = 3;

	printf("Inserire anno immatricolazione: ");
	scanf("%d", &anno);
	autoanno(con, 1, anno);
	
	return 0;
}

void autoanno(concessionario_t c[], int n, int aa)
{
	int i, j, immat;

	for(i=0;i<n;i++) {
		printf("\nConc. %d, codice %d: gestore %s %s\n", i, c[i].codice, c[i].gestore.nome, c[i].gestore.cognome);
		printf("Immatricolazioni %d\n", aa);
		immat=0;
		for(j=0;j<c[i].numauto;j++) {
			if(c[i].aut[j].immat.anno == aa) {
				immat=1;
				printf("* mese %d: %s, %s\n", c[i].aut[j].immat.mese, c[i].aut[j].modello, c[i].aut[j].targa);
			}
		}
		if(immat==0) {
			printf("NESSUNA\n");
		}
	}
}
