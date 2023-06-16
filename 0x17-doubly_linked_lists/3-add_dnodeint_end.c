#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head
 * @n: n
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node;

	end_node = malloc(sizeof(dlistint_t));
	if (!end_node)
		return (NULL);
	end_node->n = n;
	end_node->next = NULL;
	if (!(*head))
	{
		end_node->prev = NULL;
		(*head) = end_node;
	}
	else
	{
		dlistint_t *curr = *head;

		while (curr->next)
			curr = curr->next;
		end_node->prev = curr;
		curr->next = end_node;
	}
	return (end_node);
}
