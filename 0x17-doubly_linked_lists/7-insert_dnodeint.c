#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head
 * @idx: index
 * @n: n
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *t1;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	t1 = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	i = 0;
	while (t1 != NULL && i < (idx - 1))
	{
		t1 = t1->next;
		i++;
	}
	if (t1 == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = t1->next;
	new_node->prev = t1;
	if (t1->next != NULL)
		t1->next->prev = new_node;
	t1->next = new_node;
	return (new_node);
}
