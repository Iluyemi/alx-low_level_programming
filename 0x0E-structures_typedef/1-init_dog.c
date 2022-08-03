#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Function using struct dog
 * @d: function name
 * @name: first element
 * @age: second element
 * @owner: last element
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}

