#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: the name string
 * @f: the pointer of function
 * Return: viod
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
