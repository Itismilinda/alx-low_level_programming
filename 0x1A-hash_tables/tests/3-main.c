#include "../hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - check the code for the student in  ALX-Africa C-13.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "holberton");
	return (EXIT_SUCCESS);
}
