#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

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
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %.6f\n", (d->age) ? d->age : "(nil)");
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
