#include <stdio.h>

/**
 * main - print alphabet in lowercase
 * Description: function that print alphabet in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	for (char i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
