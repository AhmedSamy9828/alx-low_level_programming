#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a list
* @head : head
* @n : number
* Return: new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	temp = *head;
	new->n = n;
	if (temp == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		new->next = NULL;
		new->prev = temp;
		temp->next = new;
	}
	return (new);
}
