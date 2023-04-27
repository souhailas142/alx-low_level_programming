#include "lists.h"
/**
 * free_list - frees a list
 * @head: head
 * Return: Nothing
 */
void free_list(list_t *head)
{
	free (head);
}
