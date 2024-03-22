#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
 * @head : head
 * Return: sum of all data of a linked list
 */

int sum_dlistint(dlistint_t *head)
{
	size_t i = 0, a = 0;

	if (head == NULL)
		return (0);

	if (head->next !=  NULL)
	{
		while (head != NULL)
		{
			a += head->n;
			head = head->next;
			i++;
		}
	}
	else
	{
		while (head != NULL)
		{
			a += head->n;
			head = head->prev;
			i++;
		}
	}
	return (a);
}
