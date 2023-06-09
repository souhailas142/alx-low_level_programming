#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head
 * @idx: index
 * @n: data
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *t;
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (!head || !new_node)
		return (NULL);
	new_node->n = n;
	t = *head;
	if (idx == 0)
	{
		new_node->next = t;
		*head = new_node;
		return (new_node);
	}
	while ((idx - 1))
	{
		if (t == NULL || t->next == NULL)
			return (NULL);
		t = t->next;
		idx--;
	}
	new_node->next = t->next;
	t->next = new_node;
	return (new_node);
}
