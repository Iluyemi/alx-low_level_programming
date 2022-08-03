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
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
