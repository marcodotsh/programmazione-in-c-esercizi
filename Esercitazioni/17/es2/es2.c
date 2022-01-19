#include <stdio.h>
#include <stdlib.h>

int somma(int n, int m, Ptr_nodo l)
{
	int ris;
	ris = 0;
	while(l) {
		if(l->val>m&&l->val<n) {
			s += l->val;
		}
		l = l->next;
	}
	
	return ris;
}
