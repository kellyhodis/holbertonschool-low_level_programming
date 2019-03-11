#include "dog.h"
/**
* init_dog - initializes a variable of type struct dog
* @d: variable holding dog struct
* @name: name of dog
* @age: age of dog
* @owner: name of dog's owner
*
* Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
