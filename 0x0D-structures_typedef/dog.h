#ifndef DOGGO
#define DOGGO

/**
 * struct dog - all dog structures
 * @name: dogs name
 * @age: float for dogs age
 * @owner: dog owner
 **/

struct dog
{
	char *name;
	float age;
	char *owner;
} dog;


typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
