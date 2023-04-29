#include "lists.h"
/**
 * listint_len - the number of elements in a linked list
 * @h: head
 * Return: len of element
 */
size_t listint_len(const listint_t *h)
{
	int len;
	listint_t *t;

	if (!h)
		return (0);
	t = (listint_t *)h;
	len = 0;
	while (t)
	{
		len++;
		t = t->next;
	}
	return (len);
}
