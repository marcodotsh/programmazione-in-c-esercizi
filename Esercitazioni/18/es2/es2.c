#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
int val;
struct nodo *next;
} nodo_t;

typedef nodo_t *Ptr_nodo;

Ptr_nodo inserisci_in_testa(Ptr_nodo l, int val)
{
	Ptr_nodo tmp;
	tmp = malloc(sizeof(nodo_t));
	if(tmp) {
		tmp->val = val;
		tmp->next = l;
		l = tmp;
	}
	else
		printf("Errore allocazione memoria"\n);
	
	return l;
}

Ptr_nodo inserisci_in_coda(Ptr_nodo l, int val)
{
	if(!l)
		return inserisci_in_testa(l, val);
	
	l->next = inserisci_in_coda(l->next, val);
	return l;
}

Ptr_nodo alternata(Ptr_nodo l1, Ptr_nodo l2) {
	Ptr_nodo ris;
	ris = NULL;
	while(l1 || l2) {
		if(l1) {
			ris = inserisci_in_coda(ris, l1->val);
			l1 = l1->next;
		}
		if(l2) {
			ris = inserisci_in_coda(ris, l2->val);
			l2 = l2->next;
		}
	}

	return ris;
}
