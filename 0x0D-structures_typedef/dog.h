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
#endif /* DOG_H */
