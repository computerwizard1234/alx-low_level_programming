#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
if (d)
{
if (d->name != NULL)
{
printf("Name: %s\n", d->name);
}
else
{
printf("Name: (nil)\n");
}
printf("Age: %f\n", d_.age);
if (d->owner)
{
print("Owner: %s\n", d->owner);
}
else
{
printf("Owner: (nil)\n");
}
}
}
