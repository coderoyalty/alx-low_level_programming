#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure define dog
 * @name: name of the dog
 * @age: dog's age
 * @owner: name of the dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
