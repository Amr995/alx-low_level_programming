#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: po
 * Return: 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n %= 10;
	if (n > 5)
		printf("%d and is greater that 5", n);
	else if (n < 6)
		printf("%d and is less than 6 and not 0", n);
	else
		printf("%d and is 0", n);
	return (0);
}
