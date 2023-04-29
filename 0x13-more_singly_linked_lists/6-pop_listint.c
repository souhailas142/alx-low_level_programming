#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: head
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int n;

	if (!head || !(*head))
		return (0);
	n = (*head)->n;
	t = *head;
	*head = (*head)->next;
	free(t);
	return (n);
}
