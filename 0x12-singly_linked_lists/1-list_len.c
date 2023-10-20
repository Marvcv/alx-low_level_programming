#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Description: This function counts the number of nodes in a linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
