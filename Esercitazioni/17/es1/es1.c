#include <stdio.h>
#include <stdlib.h>

typedef struct N {
	int val;
	struct N *next;
} Node;

typedef Node *Ptr_node;

Ptr_node list_create(int v, Ptr_node t);

Ptr_node nth_element(Ptr_node list, int n);

Ptr_node list_from_array(int v[], int n);

Ptr_node list_concat(Ptr_node l1, Ptr_node l2);

void free_list(Ptr_nodo l);

int main(void)
{
	Ptr_nodo l;
	int arr[5], n;
	arr[0]=5;
	arr[1]=6;
	arr[2]=42;
	arr[3]=30;
	arr[4]=10;

	l = list_from_array(arr, 5);
	n = nth_element(l, 2);

	printf("%d\n", n->val);


	free_list(l);
	return 0;
}

Ptr_node list_create(int v, Ptr_node t)
{
	Ptr_node tmp;

	tmp = malloc(sizeof(nodo_t));
	if(tmp) {
		tmp->val = v;
		tmp->next = t;
		t = tmp;
	}
	else
		printf("Errore allocazione\n");

	return t;
}

Ptr_node nth_element(Ptr_node list, int n)
{
	while(n>0 && list) {
		list=list->next;
		n--;
	}
	
	return list;
}

Ptr_node list_from_array(int v[], int n)
{
	Ptr_node ris;

	ris = NULL;
	while(n>0) {
		n--;
		ris = list_create(v[i], ris);
	}

	return ris;
}

Ptr_node list_concat(Ptr_node l1, Ptr_node l2)
{
	Ptr_node prev;
	if(l1==NULL) {
		l1 = l2;
	}
	else {
		for(prev=l1;prev->next;prev=prev->next);
		prev->next = l2;
	}

	return l1;
}

void free_list(Ptr_nodo l)
{
	Ptr_nodo tmp;
	while(l) {
		tmp=l->next
		free(l);
		l=tmp;
	}
}
