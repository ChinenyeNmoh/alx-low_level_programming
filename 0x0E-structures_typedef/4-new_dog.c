#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: struct dog
 * If fails return NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int lenname = 0, lenowner = 0, i;
	dog_t  *dock;

	dock = malloc(sizeof(dog_t));
	if (dock == NULL)
	{
		free(dock);
		return (NULL);
	}
	while (name[lenname] != '\0')
		lenname++;
	while (owner[lenowner] != '\0')
		lenowner++;
	dock->name = malloc(sizeof(dog_t) * lenname + 1);
	dock->owner = malloc(sizeof(dog_t) * lenowner + 1);
	if (dock->name == NULL || dock->owner == NULL)
	{
		free(dock->name);
		free(dock->owner);
		free(dock);
		return (NULL);
	}
	for (i = 0; i < lenname; i++)
		dock->name[i] = name[i];
	dock->name[i] = '\0';
	dock->age = age;
	for (i = 0; i < lenowner; i++)
		dock->owner[i] = owner[i];
	dock->owner[i] = '\0';
	return (dock);
}
