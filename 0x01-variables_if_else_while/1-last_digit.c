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
		printf("Last digit of 98 is %d and is greater than 5\n", n);
	else if (n < 6 && n != 0)
		printf("Last digit of -98 is %d and is less than 6 and not 0\n", n);
	else
		printf("Last digit of 980 is %d and is 0\n", n);
	return (0);
}
