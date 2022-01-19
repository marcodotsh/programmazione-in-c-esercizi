#include <stdio.h>
#include <stdlib.h>

typedef struct N {
	int dato;
	struct N *next;
}nodo_t;

typedef nodo_t* Ptr_nodo;

Ptr_nodo inserimentoInTesta(Ptr_nodo l, int num);

Ptr_nodo inserimentoInCoda(Ptr_nodo l, int num);

Ptr_nodo listaMedie(Ptr_nodo l1);

void salvaLista(Ptr_nodo l, char file[]);

void caricaLista(Ptr_nodo *l, char file[]);

void caricaListaCrescente(Ptr_nodo *l, char file[]);

Ptr_nodo inserimentoCrescente(Ptr_nodo l, int num);

void stampaLista(Ptr_nodo l);

Ptr_nodo distruggiLista(Ptr_nodo l);

int main(void)
{
	Ptr_nodo head1, head2, head3, head4;
	int num;
	
	head1 = NULL;
	head2 = NULL;	
	head3 = NULL;
	head4 = NULL;

	printf("Inserisci elementi lista 1: ");
	scanf("%d", &num);
	while(num>0){
		head1 = inserimentoInCoda(head1, num);
		scanf("%d", &num);
	}
	stampaLista(head1);

	head2 = listaMedie(head1);
	stampaLista(head2);

	salvaLista(head2, "lista.bin");

	caricaLista(&head3, "lista.bin");
	stampaLista(head3);

	caricaListaCrescente(&head4, "lista.bin");	
	stampaLista(head4);

	distruggiLista(head1);
	distruggiLista(head2);
	distruggiLista(head3);
	distruggiLista(head4);
	return 0;
}

Ptr_nodo inserimentoInTesta(Ptr_nodo l, int num)
{
	Ptr_nodo tmp;

	tmp = malloc(sizeof(nodo_t));
	if(tmp) {
		tmp->dato = num;
		tmp->next = l;
		l = tmp;
	}
	else
		printf("Errore allocazione elemento in testa\n");

	return l;
}

Ptr_nodo inserimentoInCoda(Ptr_nodo l, int num)
{
	Ptr_nodo tmp, prev;
	
	tmp = malloc(sizeof(nodo_t));
	if(tmp) {
		tmp->dato = num;
		tmp->next = NULL;
		for(prev=l;prev->next;prev=prev->next);
		if(!l) {
			l = tmp;
		}
		else {
			prev->next = tmp;
		}
	}
	else
		printf("Errore allocazione elemento in coda\n");

	return l;
}

Ptr_nodo listaMedie(Ptr_nodo l1)
{
	Ptr_nodo l2, curr;
	int media;
	l2 = NULL;
	
	for(curr=l1;curr->next;curr=curr->next) {
		media = (curr->dato + curr->next->dato) /2;
		l2 = inserimentoInCoda(l2, media);
	}
	l2 = inserimentoInCoda(l2, curr->dato);

	return l2;
}

void salvaLista(Ptr_nodo l, char file[])
{
	FILE *fp;
	Ptr_nodo curr;
	int *tmp;

	fp = fopen(file, "wb");
	if(fp) {
		for(curr=l;curr;curr=curr->next) {
			*tmp = curr->dato;
			fwrite(tmp, sizeof(int), 1, fp);
		}
	}
}

void caricaLista(Ptr_nodo *l, char file[])
{
	FILE *fp;
	int tmp;

	fp = fopen(file, "rb");
	if(fp) {
		while(fread(&tmp, sizeof(int), 1, fp)==1) {
			*l = inserimentoInCoda(*l, tmp);
		}
	}
}

void caricaListaCrescente(Ptr_nodo *l, char file[])
{
	FILE *fp;
	int tmp;

	fp = fopen(file, "rb");
	if(fp) {
		while(fread(&tmp, sizeof(int), 1, fp)==1) {
			*l = inserimentoCrescente(*l, tmp);
		}
	}
}

Ptr_nodo inserimentoCrescente(Ptr_nodo l, int num)
{
	if(!l)
		return inserimentoInTesta(l, num);
	if(num<=l->dato)
		return inserimentoInTesta(l, num);
	
	return inserimentoCrescente(l->next, num);
}

void stampaLista(Ptr_nodo l)
{
	Ptr_nodo curr;
	for(curr=l;curr;curr=curr->next) {
		printf("%d\t", curr->dato);
	}
	printf("\n");
}

Ptr_nodo distruggiLista(Ptr_nodo l) {
	Ptr_nodo tmp;
	
	while(l) {
		tmp = l;
		l = l->next;
		free(tmp);
	}

	return l;
}
