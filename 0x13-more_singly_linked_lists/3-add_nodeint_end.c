#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: head
 * @n: nbr
 * Return: address of the new element, or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_end = NULL;
	listint_t **t = NULL;

	add_end = malloc(sizeof(listint_t));
	if (!add_end || !head)
		return (NULL);
	add_end->n = n;
	add_end->next = NULL;
	t = head;
	while (*t)
		t = &(*t)->next;
	*t = add_end;
	return (add_end);
}
