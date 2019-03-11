#include "dog.h"
#include <stdlib.h>
/**
* new_dog - creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: name of dog owner
*
* Return: dog if success or NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	char *dog_name = name;
	char *dog_owner = owner;

	doggo = malloc(sizeof(dog_t));
	doggo->name = dog_name;
	doggo->age = age;
	doggo->owner = dog_owner;
	if (!doggo)
		return (NULL);
	return (doggo);
}
