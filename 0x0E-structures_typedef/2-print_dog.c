#include <stdio.h>
#include <stdlib.h>
#include <dog.h>
/**
 * print_dog - print variable of dogs
 *
 * @d: structs of dog
 *
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		printf("Name: (nill)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
	}
}
