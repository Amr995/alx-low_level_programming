#include "main.h"

/**
 * _pow_recursion - search a string for any of a set of bytes.
 * @x: base
 * @y: exposant
 * return: The result of x power y, and return -1 if y < 0.
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
