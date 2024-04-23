#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * mian - check the sign of the number
 * description: check the type of number's sign
 * return: the number
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", 0);
	return (0);
}
