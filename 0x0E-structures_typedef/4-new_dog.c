#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *new_dog - function creates a new dog(structure with details of a dog)
 *@name:dog's name
 *@age:dog's age
 *@owner:dog's owner
 *Return:pointer to the structure dog_t
 */
dog_t *new_dog(char *name, float age, char *owner);

dog_t *new_dog(char *name, float age, char *owner)
{
	int lname, i, lowner;
	dog_t *d;

	d = malloc(sizeof(*d));
	if (!d || !name || !owner)
	{
		free(d);
		return (NULL);
	}
	for (lname = 0 ; name[lname] != '\0' ; lname++)
		;
	for (lowner = 0 ; owner[lowner] != '\0' ; lowner++)
		;
	d->name = malloc(lname + 1);
	d->owner = malloc(lowner + 1);
	if (!d->name || !d->owner)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	for (i = 0 ; i < lname ; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';
	d->age = age;
	for (i = 0 ; i < lowner ; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';
	return (d);
}
