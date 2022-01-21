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

void stampaLista(Ptr_nodo l)
{
    if(!l) {
        return;
    }
    printf("%d ", l->dato);
    stampaLista(l->next);
    return;
}

Ptr_nodo selezione(Ptr_nodo l, int sel[])
{
	int idx;
	Ptr_nodo curs, res;
	
	idx = 0;
	res = NULL;
	curs = l;
	while(curs) {
		if(sel[idx]) {
			res = inserisciInCoda(res, curs->dato);
		}
		curs=curs->next;
		idx++;
	}

	return res;
}

int main(void)
{
	Ptr_nodo list, final;
	int arr[5] = {0, 1, 0, 1, 1};

	list = NULL;
	final = NULL;


	list = inserisciInCoda(list, 3);
	list = inserisciInCoda(list, 5);
	list = inserisciInCoda(list, 8);
	list = inserisciInCoda(list, 9);
	list = inserisciInCoda(list, 12);

	final = selezione(list, arr);

	stampaLista(final);
	printf("\n");

	return 0;
}
