#include "main.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: the elements to evaluate
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;
	
	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
