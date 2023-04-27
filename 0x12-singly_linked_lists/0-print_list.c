#include "lists.h"
/**
 * print_list - function that prints all the elements of a @list_t list.
 * @h: h
 * Return: SUCCESS
 */
size_t print_list(const list_t *h)
{
	size_t i;
	list_t *t;

	i = 0;
	if (h != NULL)
	{
		t = (list_t *)h;
		while (t != NULL)
		{
			if (t->str == NULL)
				printf("[%d] %s\n", 0, "(nil)");
			else
				printf("[%d] %s\n", t->len, t->str);
			i++;
			t = t->next;
		}
	}
	return (i);
}
