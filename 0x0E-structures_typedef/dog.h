#ifndef DOG_H
#define DOG_H
/**
  *struct dog - a structure called dog
 *@name: parameter
 *@age: parameter
 *@owner: parameter
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
