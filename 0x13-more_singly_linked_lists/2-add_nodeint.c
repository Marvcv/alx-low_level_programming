#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @n: Integer element to add to the list.
 *
 * Return: Address of the new element, NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}

