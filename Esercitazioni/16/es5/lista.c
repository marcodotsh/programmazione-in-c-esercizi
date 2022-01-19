#include <stdio.h>
#include <stdlib.h>

int lunghezza_lista(nodo_t *l) {
	if(!l)
		return 0;
	return 1 + lunghezza_lista(l->next);
}

nodo_t *kelementodacoda(nodo_t *l, int k) {
	int i, len;
	nodo_t *ris;
	len = lunghezza_lista(l);
	ris = l;
	for(i=0;i<len-k;i++) {
		ris = ris->next;
	}
	
	return ris;
}
