#include "lists.h"
/**
 * listint_len - returns the number of elements ina linked listint_t list.
 * @h: pointer to first element on list.
 *
 * Return: number of elements in list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

if (head == NULL)
return (NULL);
for (i = 0; i < index; i++)
{
head = head->next;
if (head == NULL)
return (NULL);
}
return (head);
}

