#include "lists.h"
/**
 * sum_listint - sum of all the data @n of a list
 * @head: head
 * Return: sum of @n or 0
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *t;

	if (!head)
		return (0);
	t = head;
	sum = 0;
	while (t)
	{
		sum += t->n;
		t = t->next;
	}
	return (sum);
}
