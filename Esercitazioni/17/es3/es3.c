#include <stdio.h>
#include <stdlib.h>

Ptr_node primoPari_r(Ptr_node l)
{
	if(!l)
		return NULL;
	if(l->val%2==0)
		return l;
	return primoPari(l->next);
}

Ptr_node primoPari(Ptr_node l)
{
	while(l && l->val%2==1) {
		l = l->next;
	}
	
	return l;
}
