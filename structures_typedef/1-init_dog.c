#include "dog.h"

/**
 * init_dog - init variable of type struct dog
 * @d: pointer to struct dog to init
 * @name: dog name
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
