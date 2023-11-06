#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct named dog
 * @name: the dogs name
 * @age: the dogs sgae
 * @owner: the digs ownwr
 *
 * Description: thats all o for dogs
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
