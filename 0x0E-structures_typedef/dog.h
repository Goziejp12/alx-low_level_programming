#ifndef DOG_H
#define DOG_H
/**
 * struct dog- structure function
 * @name: name member
 * @age: age member
 * @owner: owner member
 * Return: 0
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
