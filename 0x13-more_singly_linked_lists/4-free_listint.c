#include "lists.h"
/**
 * free_listint - function that frees a @listint_t list.
 * @head: head
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	if (!head)
		return;
	h = head;
	while (h)
	{
		h = h->next;
		free(head);
		head = h;
	}
}
