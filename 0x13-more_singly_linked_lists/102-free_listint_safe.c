#include "lists.h"
/**
 * loop_listint_t - loop in linked list
 * @head: head
 * Return: SUCCESS or NULL id no loop
 */

listint_t *loop_listint_t(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);
	end = head->next;
	while (end)
	{
		if (end == end->next)
			return (end);
		ptr = head;
		while (ptr != end)
		{
			if (ptr == end->next)
				return (end->next);
			ptr = ptr->next;
		}
		end = end->next;
	}
	return (NULL);
}

/**
 * free_listint_safe - frees a @listint_t
 * @h: head
 * Return: size of the list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loop;
	size_t len;
	int l;

	if (h == NULL || *h == NULL)
		return (0);
	loop = loop_listint_t(*h);
	len = 0;
	l = 1;
	while ((*h != loop || l) && *h != NULL)
	{
		len++;
		next = (*h)->next;
		if (*h == loop && l)
		{
			if (loop == loop->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			l = 0;
		}
		free(*h);
		*h = next;
	}
	*h = NULL;
	return (len);
}
