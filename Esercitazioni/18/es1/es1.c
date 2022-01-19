#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
int val;
struct nodo *next;
} nodo_t;

typedef nodo_t *Ptr_nodo;

int lengthList(Ptr_nodo l)
{
	if(!l)
		return 0;
	
	return 1+lengthList(l->next);
}

Ptr_nodo kthElement(Ptr_nodo l, int k)
{
	int len;
	len = lengthList(l);
	if(k>len)
		return NULL;
	while(l && k<len) {
		k++;
		l = l->next;
	}

	return l;
}
