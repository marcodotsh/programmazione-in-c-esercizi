#include <stdio.h>
#include <stdlib.h>

typedef struct N {
	int dato;
	struct N* next;
} nodo_t;

typedef nodo_t* Ptr_nodo;

void visualizza(Ptr_nodo l)
{
	if(!l) {
		return;
	}
	printf("%d\n", l->dato);
	visualizza(l->next);
}

int lunghezza(Ptr_nodo l)
{
	if(!l) {
		return 0;
	}

	return 1+lunghezza(l->next);
}

Ptr_nodo inserisciInCoda(Ptr_nodo l, int val)
{
	if(!l) {
		Ptr_nodo tmp;
		tmp = malloc(sizeof(nodo_t));
		if(tmp) {
			tmp->dato = val;
			tmp->next = NULL;
		}
		else {
			printf("Errore allocazione memoria\n");
		}
		return tmp;
	}

	l->next = inserisciInCoda(l->next, val);
	return l;
}

Ptr_nodo elementoNum(Ptr_nodo l, int k)
{
	if(!l) {
		return NULL;
	}
	if(k==1) {
		return l;
	}
	Ptr_nodo res;
	res = elementoNum(l->next,k-1);
	return res;
}

Ptr_nodo moltilista(Ptr_nodo l)
{
	Ptr_nodo res;
	int i, len, nel, tmp;
	res = NULL;
	len = lunghezza(l);
	nel = (len/2) + (len%2);
	
	for(i=0;i<nel;i++) {
		tmp = ((elementoNum(l, 1+i))->dato)*((elementoNum(l, len-i))->dato);
		res = inserisciInCoda(res, tmp);
	}

	return res;
}

int main(void)
{
	Ptr_nodo l1, l2;
	l1 = NULL;
	l2 = NULL;
	
	l1 = inserisciInCoda(l1, 1);
	l1 = inserisciInCoda(l1, 5);
	l1 = inserisciInCoda(l1, 4);
	l1 = inserisciInCoda(l1, 7);
	l1 = inserisciInCoda(l1, 6);
	l1 = inserisciInCoda(l1, 3);
	l1 = inserisciInCoda(l1, 6);

	l2 = moltilista(l1);
	
	printf("Lista 1:\n");
	visualizza(l1);
	
	printf("Lista 2:\n");
	visualizza(l2);

	return 0;
}
