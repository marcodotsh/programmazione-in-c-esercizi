#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
int val;
struct nodo *next;
} nodo_t;

typedef nodo_t *Ptr_nodo;

Ptr_nodo kthElement(Ptr_nodo l, int k)
{
	Ptr_nodo first_k;
	first_k = l;
	while(first_k && k>0) {
		first_k = first_k->next;
		k--;
	}
	while(first_k) {
		first_k = first_k->next;
		l = l->next;
	}

	return l;
}
