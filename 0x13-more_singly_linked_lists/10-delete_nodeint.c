#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head
 * @index: index
 * Return: 1 (SUCCESS) or -1 (FAIL)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t;
	listint_t *t2;

	if (!head || !(*head))
		return (-1);
	t = *head;
	t2 = *head;
	if (index == 0)
	{
		*head = t->next;
		free(t);
		t = NULL;
		return (1);
	}
	else
	{
		while (index)
		{
			t2 = t;
			t = t->next;
			index--;
		}
		t2->next = t->next;
		free(t);
		t = NULL;
		return (1);
	}
}
