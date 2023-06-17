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

	t1 = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	i = 0;
	while (t1 && i < idx)
	{
		t1 = t1->next;
		i++;
	}
	if (!t1)
		return (NULL);
	if (!(t1->next))
		return (add_dnodeint_end(h, n));
	printf("[%d]-[%d]\n", t1->prev->n,  t1->n);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = t1->prev;
	new_node->next = t1;
	t1->prev->next = new_node;
	t1->prev = new_node;
	return (new_node);
}
