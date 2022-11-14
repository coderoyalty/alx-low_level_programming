#include "dog.h"

#include <stdio.h>


/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	const char *NIL = "(nil)";

	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name == NULL) ? NIL : d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n" (d->owner == NULL) ? NIL : d->owner);
}
