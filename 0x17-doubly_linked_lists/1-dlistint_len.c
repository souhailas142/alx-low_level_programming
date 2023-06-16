#include "lists.h"
/**
 * dlistint_len - number of elements in a linked
 * @h: header
 * Return: nbrs of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
