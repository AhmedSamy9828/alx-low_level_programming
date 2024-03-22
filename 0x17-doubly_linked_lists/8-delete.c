#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @h : head
* @idx : index of the list where the new node should be added
* @n : number
* Return: the address of the new node, or NULL if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ant;
	dlistint_t *des;
	dlistint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (-1);

	temp = *head;
	if (temp == NULL || temp->next == NULL)
	{
		head = NULL;
		return (-1);
	}
	if (index == 0)
	{
		des = temp->next;
		free(temp);
		des->prev = NULL;
		*head = des;
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
		ant->next = temp->prev;
		if (temp->next != NULL)
		{
			des = temp->next;
			des->prev = ant;
		}
		free(temp);
	}
	return (1);
}
