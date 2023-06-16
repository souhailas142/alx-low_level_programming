#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * @head: head
 * @index: index
 * Return: 1 or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *t1, *t2;
	unsigned int i;

	t1 = *head;
	t2 = *head;
	if (index == 0)
	{
		t1 = t1->next;
		free((*head));
		(*head) = t1;
		return (1);
	}
	i = 0;
	while (t1)
	{
		if (i == index)
			break;
		t1 = t1->next;
		if (!t1)
			return (-1);
		t2 = t1->next;
	}
	t1->next = t2->next;
	t2->next->prev = t1;
	free(t2);
	return (0);
}
