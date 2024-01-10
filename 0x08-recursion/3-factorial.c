#include "main.h"
#include <string.h>

/**
 * factorial - returns the length of a string
 * @n:pointer the number
 * Return: factoriol number
 */

int factorial(int n)
{
	if (n < 1)
		return -1;
	else if (n > 1)
		return n *= factorial(n - 1);
	else
		return 1;
}

