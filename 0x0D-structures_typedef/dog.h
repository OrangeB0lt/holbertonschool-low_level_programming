#ifndef DOG
#define DOG

struct dog
{
	char *name;
	float age;
	char *owner;

};

/**
 * dog_type - typedef for dog
 */

typedef struct dog dog_type;
void free_dog(dog_type *d);
dog_type *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
