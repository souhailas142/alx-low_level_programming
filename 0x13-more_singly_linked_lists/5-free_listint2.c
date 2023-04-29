#include "lists.h"
/**
 * free_listint2 - function that frees a @listint_t list
 * @head: head
 * Rteurn: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

	if (!head || !(*head))
		return;
	h = *head;
	while (h)
	{
		h = h->next;
		free(*head);
		*head = h;
	}
	head = NULL;
}
