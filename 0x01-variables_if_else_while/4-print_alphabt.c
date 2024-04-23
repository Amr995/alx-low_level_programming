#include <stdio.h>

/**
 * main - print alphabet in lowercase
 * Description: function that print alphabet in lowercase
 * Return: 0 (success)
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'q' || i != 'e')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
