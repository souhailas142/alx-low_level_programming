#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * @head: head
 * @index: index
 * Return: 1 or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *t1, *t2, *t3;
	unsigned int i;

	if (!head || !(*head))
		return (-1);
	t1 = *head;
	t2 = *head;
	if (index == 0)
	{
		(*head) = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(t1);
		return (1);
	}
	i = 0;
	while (t1 && i < (index - 1))
	{
		t1 = t1->next;
		i++;
	}
	if (t1->next->next == NULL)
	{
		t3 = t1->next;
		t1->next = NULL;
		t3->prev = NULL;
		free(t3);
		return (1);
	}
	t2 = t1->next->next;
	t3 = t2->prev;
	t1->next = t2;
	t2->prev = t1;
	t3->prev = NULL;
	t3->next = NULL;
	free(t3);
	return (1);
}
