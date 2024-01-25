#include "function_pointers.h"

/**
 * array_interator - function that executes a function
 * given as a parameter on each element of an array.
 * @array: int
 * @size: the size
 * @action: the pointer to the function.
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action (*array++);
}
