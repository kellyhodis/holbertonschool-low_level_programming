#include "dog.h"
#include <stdlib.h>
char *_strcpy(char *dest, char *src);
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
	struct dog *doggo = malloc(sizeof(struct dog));

	doggo = malloc(sizeof(dog_t));
	if (!doggo)
		return (NULL);
	doggo->name = name;
	doggo->age = age;
	doggo->owner = owner;
	return (doggo);
}
/**
* _strcpy - copies string pointed to by src to the buffer
* @dest: destination
* @src: source
*
* Return: pointer to array
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
