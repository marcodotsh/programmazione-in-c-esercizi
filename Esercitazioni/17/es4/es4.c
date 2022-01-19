#include <stdio.h>
#include <stdlib.h>

Ptr_node compactList(Ptr_node l)
{
	Ptr_node curr, tmp;
	if(l) {
		curr=l;
		while(curr->next) {
			if(curr->val==curr->next->val) {
				tmp = curr->next;
				curr->next=curr->next->next;
				free(tmp);
			}
			else
				curr=curr->next;
		}
	}
	
	return l;
}
