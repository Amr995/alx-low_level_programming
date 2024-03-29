#include "main.h"

/**
 * _pow_recursion - search a string for any of a set of bytes.
 * @x: base
 * @y: exposant
 * Return: the x power y result.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
