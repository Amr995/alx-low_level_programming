#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog stDog;

	stDog = *d;
	stDog.name = *name;
	stDog.age = age;
	stDog.owner = *owner;
}
