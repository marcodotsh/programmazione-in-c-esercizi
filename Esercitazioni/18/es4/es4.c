#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
int val;
struct nodo *next;
} nodo_t;

typedef nodo_t *Ptr_nodo;

Ptr_nodo ordinaLista(Ptr_nodo l)
{	Ptr_nodo lista_ord, tmp, prec_tmp;
	if(l==NULL || l->next==NULL)
		return l;
	lista_ord = ordina_lista(l->next);
	tmp = lista_ord;
	while(tmp && tmp->dato < l->dato) {
		prec_tmp = tmp;
		tmp = tmp->next;
	}
	if(tmp==lista_ord) {
		l->next = lista_ord;
		return l;
	}
	else {
		l->next = tmp;
		prec_tmp->next = l;
		return lista_ord;
	}
}
