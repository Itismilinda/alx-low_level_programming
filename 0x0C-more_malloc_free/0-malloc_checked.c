#include <stdlib.h>
#include "main.h"

/**
 *malloc_checked - array for prints a string
 *@b: number of memory that will be allocated
 *
 *Return: void or a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
      void *p;

      ptr = malloc(b);
      if (ptr == NULL)
       {
            exit(98);
       } 

       return (ptr);
}
