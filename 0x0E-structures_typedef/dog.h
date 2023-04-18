#ifndef DOG_H
#define DOG_H

/**
*struct dog - dogs info
*@name:name of the dog
*@age:age of teh dog
*dog_t - typedef
*owner:owner of dog
*description:data base
*/
struct dog
{
	char *name;
	float age;
	char *owner;
	char dog_t;
};



/**
*dog_t - typedef for strut
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);


#endif
