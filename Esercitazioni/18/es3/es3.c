#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
int val;
struct nodo *next;
} nodo_t;

typedef nodo_t *Ptr_nodo;

Ptr_nodo list_reverse(Ptr_nodo L)
{
	Ptr_nodo ris, succ;
	ris = NULL;
	while(L) {
		succ = L->next;
		L->next = ris;
		ris = L;
		L = succ;
	}

	return ris;
}
