#include "main.h"
/**
 * _sqrt_recursion - print the result of square n.
 * @n: int
 * @val: squar root
 * Return: The result
 */

int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: int to find square root
 * @val: squar root
 * Return: The result
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
