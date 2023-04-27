#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: h
 * Return: SUCCESS
 */
size_t list_len(const list_t *h)
{
	size_t len;
	list_t *t;

	len = 0;
	if (h != NULL)
	{
		t = (list_t *)h;
		while (t != NULL)
		{
			len++;
			t = t->next;
		}
	}
	return (len);
}
