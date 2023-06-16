#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t
 * @head: head
 * @index: idex
 * Return: Node or Null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	tmp = head;
	i = 0;
	while (tmp)
	{
		if (i == index)
			return (tmp);
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
