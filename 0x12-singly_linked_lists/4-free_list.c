#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list - Frees a list_t list.
 * @head: head pointer
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);	
	free(head->str);
	free(head); 
	
}
