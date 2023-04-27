#include "lists.h"
/**
 * add_node_end - adds a new node at the end of lists
 * @head: hread
 * @str: str
 * Return: new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node = NULL;
	list_t **t = NULL;

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);
	end_node->str = strdup(str);
	end_node->len = strlen(str);
	end_node->next = NULL;
	if (head != NULL)
	{
		t = head;
		while (*t != NULL)
			t = &(*t)->next;
		*t = end_node;
	}
	return (end_node);
}
