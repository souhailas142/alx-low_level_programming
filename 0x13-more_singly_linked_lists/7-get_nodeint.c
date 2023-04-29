#include "lists.h"
/**
 * *get_nodeint_at_index - function that returns the nth node of a list
 * @head: head
 * @index: index
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;

	if (!head)
		return (NULL);
	node = head;
	if (index == 0)
		return (head);
	while (index)
	{
		node = node->next;
		index--;
	}
	return (node);
}
