#include "lists.h"
/**
* delete_dnodeint_at_index - delete_dnodeint_at_index
* @index : is the index of the node that should be deleted. Index starts at 0
* @head : head
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ant, *des, *temp;
	unsigned int i;

	ant = *head;
	if (head == NULL)
		return (-1);
	temp = *head;
	if (temp == NULL || (temp->next == NULL && index == 0))
	{
		if (temp != NULL)
		{
			free(*head), *head = NULL;
			return (1);
		}
		return (-1);
	}
	if (index == 0)
	{
		des = temp->next;
		des->prev = NULL;
		*head = temp->next;
		free(temp);
	}
	else
	{
		for (i = 0 ; i < index ; i++)
		{
			if (temp->next == NULL)
				return (-1);
			temp = temp->next;
		}
			ant = temp->prev;
			ant->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = ant;
			else
				ant->next = NULL;
			free(temp);
	}
	return (1);
}
