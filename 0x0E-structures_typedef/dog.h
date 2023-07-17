#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - dog's information (name, age and owner)
*
* @name: pointer name of the dog
* @age: age
* @owner: pointer to owner of the dog
*/
struct dog
{
char *name;
float age;
char *owner;
};

/**
* dog_t - new name for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif

