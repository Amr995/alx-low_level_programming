#include "lists.h"

/**
 * listint_len - prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t listint_len(const listint_t *h)
{
	size_i i = 0;

	ehile (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
