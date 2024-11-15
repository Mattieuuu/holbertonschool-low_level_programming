#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Affiche les informations d'un chien
 * @d: Pointeur vers la structure dog à afficher
 *
 * Description : Affiche les informations du chien, en imprimant "(nil)" si
 * un élément est NULL, ou en ne faisant rien si d est NULL.
 */

void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
}
printf("Age: %f\n", d->age);
if (d->owner == NULL)
{
printf("Owner: (nil)\n");
}
else
{
printf("Owner: %s\n", d->owner);
}
}
