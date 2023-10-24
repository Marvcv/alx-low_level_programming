#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Data of the head node.
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;
	hnode = curr->n;
	h = curr->next;
	free(curr);
	*head = h;

	return (hnode);
}

