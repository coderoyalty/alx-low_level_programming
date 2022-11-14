#include "dog.h"
#include <stdlib.h>

/* make a strlen function */

/**
 * _strlen - finds the length of @str
 * @str: string
 * Return: int
 */

int _strlen(char *str)
{
	int len = 0;

	if (str == NULL)
		return (len);
	while (str[len] != '\0')
		len++;
	return (len);
}

/* make a function to copy str*/

/**
 * _strcpy - copies @src into @dest
 * @dest: destination
 * @src: source
 * Return: void
 */

void _strcpy(char *dest, char *src)
{
	int len, i;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
}

/**
 * new_dog - allocates memory for dog_t
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: dog_t pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1 = _strlen(name);
	int len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	dog->name = _strcpy(dog->name, name);
	dog->owner = _strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);

}
