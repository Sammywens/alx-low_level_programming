#include "dog.h"
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name member of the dog
 * @age: age member of the dog
 * @owner: owner member of the dog
 *
 * Return: pointer to the new dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *temp_name;
	char *temp_owner;
	dog_t *new_dog;

	temp_name = malloc(sizeof(*name) * (strlen(name) + 1));
	temp_owner = malloc(sizeof(*owner) * (strlen(owner) + 1));
	new_dog = malloc(sizeof(dog_t));

	if (temp_name && temp_owner && new_dog)
	{
		strcpy(temp_name, name);
		strcpy(temp_owner, owner);
		new_dog->name = temp_name;
		new_dog->age = age;
		new_dog->owner = temp_owner;
	}
	else
	{
		free(temp_name);
		free(temp_owner);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
