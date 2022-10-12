#ifndef _DOG_H_
#define _DOG_H_
/**
* struct dog - info on dog.
*@name: dog's name.
*@age: age of the dog in float.
*@owner: name of the owner of the dog.
*/
struct dog
{
char *name;
char age;
char *owner;
};
typedef struct dog dog_t;
int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif 
