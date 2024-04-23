#include <stdio.h>

/**
 * main - print all single digit numbers
 * Description: function that print number from 0 to 9
 * Return: 0 (success)
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%i", n);
		n++;
	}
	printf('\n');

	return (0);
}
