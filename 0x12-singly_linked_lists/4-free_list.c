#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Frees a list.
 * @head: Pointer to the head of the list.
 *
 * Description: This function frees the memory allocated for each node and its
 * string in the list. It also frees the head of the list.
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		free(temp->str);
		free(temp);
		temp = temp->next;
	}
}

