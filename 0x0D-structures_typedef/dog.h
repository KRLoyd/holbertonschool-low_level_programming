#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct for dog type
 * @name: First member, name of dog
 * @age: Second member, age of dog
 * @owner: Third member, owner's name
 *
 * Description: define dog types
 **/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *new_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
#endif /* DOG_H */
