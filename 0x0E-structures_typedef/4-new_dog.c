#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: pointer to new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpy1, *cpy2;
	int len1 = 0, len2 = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len1])
		len1++;
	while (owner[len2])
		len2++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	cpy1 = malloc(len1 + 1);
	if (cpy1 == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		cpy1[i] = name[i];
	cpy1[i] = '\0';

	cpy2 = malloc(len2 + 1);
	if (cpy2 == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		cpy2[i] = owner[i];
	cpy2[i] = '\0';

	new_dog->name = cpy1;
	new_dog->age = age;
	new_dog->owner = cpy2;
	return (new_dog);
}
