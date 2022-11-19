#ifndef DOG_H
#define DOG_H
/**
  * struct dog - structure for a dog
  * @name: name of dog
  * @age: dog age
  * @owner: dog owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
