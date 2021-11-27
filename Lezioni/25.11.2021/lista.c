#include <stdio.h>
#include <stdlib.h>

typedef struct N {
	int dato;
	struct N *next;
} nodo_t;

typedef nodo_t* Ptr_nodo;

int main(void)
{
	int n;
	Ptr_nodo testa, tmp;
	testa = NULL;
	tmp = NULL;

	scanf("%d", &n);
	while(n>0) {
		tmp = malloc(sizeof(nodo_t));
		if(tmp) {
			tmp->dato=n;
			tmp->next=testa;
			testa=tmp;
		}
		else
			printf("Errore allocazione\n");

		scanf("%d", &n);
	}

	for(tmp=testa;tmp;tmp=tmp->next) {
		printf("%d ", tmp->dato);
	}
	printf("\n");
	
	while(testa) {
		tmp = testa;
		testa = testa->next;
		free(tmp);
		tmp = NULL;
	}

	return 0;
}
