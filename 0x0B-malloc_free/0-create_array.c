#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: int
 * @c: char
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	else
	{
		int *i = malloc(size_of(size) * 4);
		for(int n = 0; n <= size; n++)
			i[n] = c;
	}
	return (i);
}
