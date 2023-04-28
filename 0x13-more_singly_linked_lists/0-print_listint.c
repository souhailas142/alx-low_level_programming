#include "lists.h"
/**
 * print_listint - prints all the elements of alist
 * @h: head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nbr;
	listint_t *t;

	if (!h)
		return (1);
	t = (listint_t *)h;
	nbr = 0;
	while (t)
	{
		printf("%d\n", t->n);
		nbr++;
		t = t->next;
	}
	return (nbr);
}
