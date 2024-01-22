#include "dog.h"
#include <stdlib>

/**
 * print_dog - print the dog info
 * @d: structure
 *
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: %s\n", "(nil)");
		if (d->age)
			printf("Age: %.6f\n", d->age);
		else
			printf("Age: %s\n", "(nil)");
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: %s\n", "(nil)");
	}
	else
		printf("(nil)");
}
