#include "dog.h"
#include <stdlib.h>
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
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
	if (!name)
		return (NULL);
	if (!owner)
		return (NULL);
	doggo->name = malloc(_strlen(name) + 1);
	if (!doggo->name)
	{
		free(doggo->name);
		return (NULL);
	}
	else
		doggo->name = _strcpy(doggo->name, name);
	doggo->age = age;
	doggo->owner = malloc(_strlen(owner) + 1);
	if (!doggo->owner)
	{
		free(doggo->owner);
		return (NULL);
	}
	else
		doggo->owner = _strcpy(doggo->owner, owner);
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
/**
* _strlen - returns the length of a string
* @s: input string
*
* Return: 0
*/
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	return (length);
}
