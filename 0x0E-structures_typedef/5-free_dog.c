#include <stdlib.h>
#include "dog.h"

/**
* main - Entry point
* Description: Struct dog
* free_dog - frees memory allocated for a struct dog
* @d: struct dog to free
*
* Return: always return 0 (seccess)
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
