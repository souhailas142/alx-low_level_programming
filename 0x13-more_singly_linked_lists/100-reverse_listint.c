#include "lists.h"
/**
 * reverse_listint - reverses a @listint_t
 * @head: head
 * Return: reverses a @listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *t1;
	listint_t *t2;

	if (!head || !(*head))
		return (NULL);
	t1 = *head;
	*head = NULL;
	while (t1)
	{
		t2 = t1->next;
		t1->next = *head;
		*head = t1;
		t1 = t2;
	}
	return (*head);
}
