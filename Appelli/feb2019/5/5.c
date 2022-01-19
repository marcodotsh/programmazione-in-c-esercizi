#include <stdlib.h>
#include <stdio.h>

typedef struct N {
	int dato;
	struct N* next;
} nodo_t;

typedef nodo_t* Ptr_nodo;

Ptr_nodo inserisciInCoda(Ptr_nodo l, int val)
{
	if(!l) {
		Ptr_nodo tmp;
		tmp = malloc(sizeof(nodo_t));
		if(tmp) {
			tmp->dato = val;
			tmp->next = NULL;
			return tmp;
		}
		else {
			printf("Errore allocazione memoria\n");
		}
	}
	l->next = inserisciInCoda(l->next, val);
	return l;
}

void stampaLista(Ptr_nodo l) 
{
	if(!l) {
		return;
	}
	printf("%d\n", l->dato);
	stampaLista(l->next);
	return;
}

Ptr_nodo inverti_segno(Ptr_nodo l)
{
	Ptr_nodo res, curr;
	int nzeros;
	res = NULL;
	nzeros = 0;
	for(curr=l;curr;curr=curr->next) {
		if(curr->dato==0) {
			nzeros++;
		}
		if(nzeros!=1) {
			res = inserisciInCoda(res,curr->dato);
		}
		else {
			res = inserisciInCoda(res,-(curr->dato));
		}
	}

	return res;
}

int main(void)
{
	Ptr_nodo l1, l2;
	l1 = NULL;
	l2 = NULL;
	l1 = inserisciInCoda(l1, 10);
	l1 = inserisciInCoda(l1, 0);
	l1 = inserisciInCoda(l1, 3);
	l1 = inserisciInCoda(l1, -5);
	l1 = inserisciInCoda(l1, 0);
	l1 = inserisciInCoda(l1, 2);
	l1 = inserisciInCoda(l1, 1);
	l1 = inserisciInCoda(l1, 0);
	l1 = inserisciInCoda(l1, 3);
	l2 = inverti_segno(l1);
	printf("L1:\n");
	stampaLista(l1);
	printf("L2:\n");
	stampaLista(l2);

	return 0;
}
