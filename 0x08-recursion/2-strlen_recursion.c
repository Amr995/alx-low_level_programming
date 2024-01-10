#include "main.h"
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\n')
		return strlen(s);
	else
		_strlen_recursion(s + 1);
}
