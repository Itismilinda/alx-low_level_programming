#include "function_pointers.h"
#include <stdio.h>
#include <string.h>

void print_name(char *name, void (*f)(char *)) {
    printf("Name: ");
    (*f)(name);  // Call the provided function pointer with the name argument
}

// Function to print the name in "Betty style"
void print_name_betty(char *name) {
    char *first = strtok(name, " ");
    char *last = strtok(NULL, " ");
    printf("%s, %s\n", last, first);
}

int main() {
    char *name = "John Doe";

    // Call print_name with the name argument and a function pointer to print the name in Betty style
    print_name(name, print_name_betty);

    return 0;
}
