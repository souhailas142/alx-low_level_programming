#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: head
 * @str: str
 * Return: address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add = NULL;

	add = malloc(sizeof(list_t));
	if (!add)
		return (NULL);
	add->str = strdup(str);
	add->len = strlen(str);
	add->next = *head;
	*head = add;
	return (add);
}
