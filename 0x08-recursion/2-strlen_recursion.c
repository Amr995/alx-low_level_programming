#include "main.h"
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	if (*s > '\0')
		_strlen_recursion(s + i++);
	else
		return (i);
}
