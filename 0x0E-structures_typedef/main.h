#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int *_strcpy(char *det, char *src);
int _strlen(char *str);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif 
