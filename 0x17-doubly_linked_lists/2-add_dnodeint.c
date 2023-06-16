#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning
 * @head: head
 * @n: n
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *beg_node;

	beg_node = malloc(sizeof(dlistint_t));
	if (!beg_node)
		return (NULL);
	beg_node->n = n;
	beg_node->prev = NULL;
	if (!(*head))
		beg_node->next = NULL;
	else
	{
		beg_node->next = (*head);
		(*head)->prev = beg_node;
	}
	(*head) = beg_node;
	return (beg_node);
}
