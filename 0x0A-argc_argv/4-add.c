#include <stdio.h>
#include <stdlib.h>

/**
 * main - it all starts here
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 * Return: always 0;
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	for (int i = 1; i < argc; i++)
	{
		int x = atoi(argv[i]);

		if (x < 0 || x > 9)
			return (printf("Error\n"), 1);
		sum += x;
	}
	printf("%d\n", sum);
	return (0);
}
