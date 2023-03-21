#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * _strdup - returns a pointer to malloc
 * which contains a copy of the string
 * @str: string to duplicate
 * Return: duplicated string with malloc
 */

char *_strdup(char *str)
{
	char *dup_str;
	int i;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (str[i] != '\0')
		i = i + 1;
	dup_str = malloc(sizeof(*dup_str) * (i + 1));

	if (dup_str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (len < i)
	{
		dup_str[len] = str[len];
		len = len + 1;
	}
	dup_str[len] = '\0';
	
	return (dup_str);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(*dog));

	dog->age = age;

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = _strdup(name);

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = _strdup(owner);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	return(dog);
}
