#include "lists.h"

/**
 * free_listint2 - Frees a linked list of listint_t elements.
 * @head: Pointer to the head of the list.
 *
 * Return: No return.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

