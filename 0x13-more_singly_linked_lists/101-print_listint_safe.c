#include "lists.h"
/**
 * print_listint_safe - print listint safe
 * @head: head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *h;
	int nbrNode;

	if (!head)
		exit(98);
	h = (listint_t *)head;
	nbrNode = 0;
	while (h)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		nbrNode++;
		h = h->next;
	}
	return (nbrNode);
}
