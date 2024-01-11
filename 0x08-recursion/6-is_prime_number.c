#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check if n is a prime number
 * @other: int
 * @n: int
 * Return: 1(success), 0(failure)
 */

int check_prime(int n, int other);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n if they can divide it
 * @n: int
 * @other: int
 * Return: int
 */

int check_prime(int n, int other)
{
	if (other >= n && n > 1)
		return (1);
	else if (n % other == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, other + 1));
}
