#include "lists.h"
/**
 * find_listint_loop - loop in linked list
 * @head: head
 * Return: SUCCESS or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
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
