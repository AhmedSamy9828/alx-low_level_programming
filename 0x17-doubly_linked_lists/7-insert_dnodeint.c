#include "lists.h"

/**
 * len - function that returns the number of elements in a linked
 * @h : head
 * Return: number of elements
 */

unsigned int len(const dlistint_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}

/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @h : head
* @idx : index of the list where the new node should be added
* @n : number
* Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp;
	unsigned int i = 0,  num_node = 0;

	if (h == NULL || (*h == NULL && idx > 0))
		return (NULL);

	temp = *h;
	if ((idx == 0 && *h != NULL) || (*h == NULL && idx == 0))
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	num_node = len(temp);
	if (idx > num_node)
	{
		return (NULL);
	}
	if (num_node == idx)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		while (i != idx)
		{
			temp = temp->next;
			i++;
		}
		new->n = n;
		new->next = temp;
		new->prev = temp->prev;
		temp->prev->next = new;
		temp->prev = new;
	}
	return (new);
}
