#include "lists.h"
/**
 * free_list - frees a list
 * @head: head
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *node;

	if (!head)
		return;
	node = head;
	while (node)
	{
		free(node->str);
		free(node);
		node = node->next;
	}
}
