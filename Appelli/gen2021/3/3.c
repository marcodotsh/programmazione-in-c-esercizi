#include <stdio.h>
#include <stdlib.h>

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
		}
		else {
			printf("Errore allocazione memoria\n");
		}
		return tmp;
	}
	l->next = inserisciInCoda(l->next, val);
	return l;
}

void visualizza(Ptr_nodo l)
{
	if(!l) {
		return;
	}
	printf("%d\n", l->dato);
	visualizza(l->next);
	return;
}

Ptr_nodo elaboralista(Ptr_nodo l, int k, int val)
{
	int i;
	Ptr_nodo res;
	res = NULL;
	while(l) {
		res = inserisciInCoda(res,l->dato);
		for(i=0;i<k;i++) {
			res = inserisciInCoda(res,val);
		}
		l = l->next;
	}

	return res;
}

int main(void)
{
	Ptr_nodo l1, l2;
	
	l1 = NULL;
	l2 = NULL;
	l1 = inserisciInCoda(l1,1);
	l1 = inserisciInCoda(l1,2);
	l1 = inserisciInCoda(l1,-1);
	l1 = inserisciInCoda(l1,4);
	l1 = inserisciInCoda(l1,-6);
	
	l2 = elaboralista(l1, 2, 0);

	printf("Lista 1:\n");
	visualizza(l1);
	printf("Lista 2:\n");
	visualizza(l2);

	return 0;

}
