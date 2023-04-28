#include "lists.h"
/**
 * add_nodeint -  adds a new node at the beginning of a list
 * @head: head
 * @n: nbr
 * Return: address of the new element, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_beg;

	add_beg = malloc(sizeof(listint_t));
	if (!add_beg || !head)
		return (NULL);
	add_beg->n = n;
	add_beg->next = *head;
	*head = add_beg;
	return (add_beg);
}
