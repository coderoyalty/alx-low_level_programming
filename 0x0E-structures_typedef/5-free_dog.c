#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory alloc by new_dog
 * @dog: struct dog pointer
 * Return: void
 */


void free_dog(dog_t *dog)
{
	if (dog == NULL)
		return;
	if (dog->name != NULL)
		free(dog->name);
	if (dog->owner != NULL)
		free(dog->owner);
	free(dog);
}
