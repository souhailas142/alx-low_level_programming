#include "lists.h"
/**
 * loop_listint_t - loop in linked list
 * @head: head
 * Return: SUCCESS or NULL id no loop
 */

listint_t *loop_listint_t(listint_t *head)
{
        listint_t *ptr, *end;

        if (head == NULL)
                return (NULL);
        end = head->next;
        while (end)
        {
                if (end == end->next)
                        return (end);
                ptr = head;
                while (ptr != end)
                {
                        if (ptr == end->next)
                                return (end->next);
                        ptr = ptr->next;
                }
                end = end->next;
        }
        return (NULL);
}
