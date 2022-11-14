#include "dog.h"

#include <stdlib.h>


/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("nil\n");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
