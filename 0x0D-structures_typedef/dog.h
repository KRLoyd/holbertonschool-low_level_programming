#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct for dog info
 * @name: First member, name of dog
 * @age: Second member, age of dog
 * @owner: Third member, owner's name
 **/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
