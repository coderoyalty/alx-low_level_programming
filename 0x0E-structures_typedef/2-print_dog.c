#include "dog.h"

#include <stdio.h>

#define NIL_ "(nil)"

/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = NIL_;
	if (d->owner == NULL)
		d->owner = NIL_;
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
