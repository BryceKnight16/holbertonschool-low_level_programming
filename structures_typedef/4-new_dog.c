#include <stdlib.h>
#include <stdio.h>
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
	dup_str = (char *)malloc(i + 1);

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
	return (dup_str);
}

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return NULL;
	}
	dog->name = _strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->age = age;
	dog->owner = _strdup(owner);

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	return(dog);
	free(dog);
}
