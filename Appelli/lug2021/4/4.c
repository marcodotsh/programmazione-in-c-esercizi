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

int lunghezza(Ptr_nodo l)
{
	if(!l) {
		return 0;
	}

	return 1+lunghezza(l->next);
}

Ptr_nodo elementok(Ptr_nodo l, int k)
{
	if(!l) {
		return NULL;
	}
	if(k==1) {
		return l;
	}
	
	return elementok(l->next, k-1);
}

Ptr_nodo molt(Ptr_nodo l)
{
	Ptr_nodo res;
	int i, lres, len, tmp;
	
	res = NULL;
	len = lunghezza(l);
	lres = (len/2) + (len%2);
	for(i=0;i<lres;i++) {
		tmp = ((elementok(l, 1+i))->dato)*((elementok(l, len-i))->dato);
		res = inserisciInCoda(res,tmp);
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

        l2 = molt(l1);

        printf("Lista 1:\n");
        visualizza(l1);

        printf("Lista 2:\n");
        visualizza(l2);

        return 0;
}
