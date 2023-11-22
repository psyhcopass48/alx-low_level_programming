#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

struct dog {
    char *name;
    float age;
    char *owner;
};

void print_dog(struct dog *d);

int main() {
    // Example usage
    struct dog myDog;

    myDog.name = "Buddy";
    myDog.age = 3.5;
    myDog.owner = "John Doe";

    // Function call to print the dog
    print_dog(&myDog);

    return 0;
}

void print_dog(struct dog *d) {
    if (d == NULL)
        return;

    if (d->name == NULL)
        d->name = "(nil)";
    if (d->owner == NULL)
        d->owner = "(nil)";

    printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
