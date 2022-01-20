#include <stdlib.h>
#include <stdio.h>
typedef struct N {
	int dato;
	struct N* next;
}nodo_t;

typedef nodo_t* Ptr_nodo;

Ptr_nodo inserisciInCoda(Ptr_nodo l, int val) {
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

int lunghezzalista(Ptr_nodo l)
{
	if(!l) {
		return 0;
	}
	return 1+lunghezzalista(l->next);
}

Ptr_nodo keldalfondo(Ptr_nodo l, int k)
{
	int i;
	Ptr_nodo curs, res;
	if(k<=lunghezzalista(l)) {
		curs = l;
		res = l;
		
		for(i=0;i<k;i++) {
			curs = curs->next;
		}

		while(curs) {
			curs = curs->next;
			res = res->next;
		}
	}
	else {
		res = NULL;
		printf("La lista è troppo corta!\n");
	}

	return res;
}

int main()
{
	Ptr_nodo lista, kel;
	int k;

	lista = NULL;
	kel = NULL;

	lista = inserisciInCoda(lista, 5);
	lista = inserisciInCoda(lista, 6);
	lista = inserisciInCoda(lista, 8);
	lista = inserisciInCoda(lista, 56);
	lista = inserisciInCoda(lista, 9);
	lista = inserisciInCoda(lista, 14);
	lista = inserisciInCoda(lista, 35);
	lista = inserisciInCoda(lista, 1);
	
	printf("Che elemento vuoi dal fondo? ");
	scanf("%d", &k);
	
	kel = keldalfondo(lista, k);
	if(kel) {
		printf("Dato elemento: %d\n", kel->dato);
	}

	return 0;
}
