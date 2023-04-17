#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog - a new type defined by me!
 * @name: element
 * @age: element
 * @owner: element
 */

struct dog
{
char *name;
float age;
char *owner;
};

#endif
