#ifndef DOG_H
#define DOG_H

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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
