#include <stdio.h>

/**
 * main - print alphabet in lowercase
 * Description: function that print alphabet in lowercase
 * Return: 0 (success)
 */

int main(void)
{
        char i = 'a', I = 'A';

        while (i <= 'z')
        {
                putchar(i);
                i++;
        }
	while (I <= 'Z')
	{
		putchar(I);
		I++;
	}
        putchar('\n');

        return (0);
}

