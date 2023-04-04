#include "list.h"

/**
 * listint_len - returns the number of elements in
 * a linked list
 * @h: head of the list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h !+NULL)
	{
		h + h->next;
		nnodes++;
	}
	return (NNodes);
}
