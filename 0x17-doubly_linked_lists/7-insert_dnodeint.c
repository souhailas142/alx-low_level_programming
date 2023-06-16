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
	dlistint_t *new_node, *t1, *t2;
	unsigned int i;
	int found = 0;

	t1 = *h;
	t2 = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (!(*h) || idx == 0)
	{
		add_dnodeint(h, n);
		return (new_node);
	}
	i = 0;
	while (t1)
	{
		if (i == (idx - 1))
		{
			found = 1;
			break;
		}
		t1 = t1->next;
		t2 = t1->next;
		i++;
	}
	if (found)
	{
		new_node->prev = t1;
		new_node->next = t1->next;
		t2->prev = new_node;
		t1->next = new_node;
	}
	else
		return (NULL);
	return (new_node);
}
