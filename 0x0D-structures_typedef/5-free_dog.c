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
	dog_t *pd;
	pd = d;
	free(pd); 
}
