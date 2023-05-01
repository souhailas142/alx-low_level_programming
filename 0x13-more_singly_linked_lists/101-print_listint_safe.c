#include "lists.h"
/**
 * _f - funct to reallocates memory
 * @list: old list
 * @size: size
 * @new: new node
 * Return: pointer to the new list
 */
const listint_t **_f(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **n;
	size_t i;

	n = malloc(size * sizeof(listint_t *));
	if (n == NULL)
	{
		free(list);
		exit(98);
	}
	i = 0;
	while (i < (size - 1))
	{
		n[i] = list[i];
		i++;
	}
	n[i] = new;
	free(list);
	return (n);
}
/**
 * print_listint_safe - print listint safe
 * @head: head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, nbrNode;
	const listint_t **list = NULL;

	nbrNode = 0;
	while (head != NULL)
	{
		i = 0;
		while (i < nbrNode)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (nbrNode);
			}
			i++;
		}
		nbrNode++;
		list = _f(list, nbrNode, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (nbrNode);
}
