#ifndef DOG_H
#define DOG_H

/**
 * struct dog - attributes of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: details of the dog
 */

struct dog
{
	char *owner;
	char *name;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
