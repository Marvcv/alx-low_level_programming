#include "lists.h"

/**
 * free_listint - Frees a linked list of listint_t elements.
 * @head: Pointer to the head of the list.
 *
 * Return: No return.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}

