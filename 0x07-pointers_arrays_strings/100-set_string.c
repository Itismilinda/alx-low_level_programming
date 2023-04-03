#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 *
 * @s: Pointer to the address of a string.
 * @to: Pointer to the string to be assigned to *s.
 *
 * Description: The function sets the value of a pointer to a char.
 * It sets *s to point to the same string as *to.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
