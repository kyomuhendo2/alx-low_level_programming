#include <stdlib.h>
#include "dog.h"

/**
* free_dog -  frees the memory of dog
* @d: pointer to dog_t to free
*
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
