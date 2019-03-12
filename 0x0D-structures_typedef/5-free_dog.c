#include "dog.h"
#include <stdlib.h>
/**
* free_dog - function that frees dogs
* @d: pointer to memory that needs to be freed
*
* Return: nothing
*/
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
