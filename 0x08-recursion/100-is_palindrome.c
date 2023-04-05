#include "main.h"
#include <stdio.h>
#include <string.h>
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int check_palindrome(char *s, int start, int end)
{
    if (start >= end)
    {
        return 1;
    }

    if (s[start] != s[end])
    {
        return 0;
    }

    return check_palindrome(s, start+1, end-1);
}

int is_palindrome(char *s)
{
    int len = strlen(s);
    return check_palindrome(s, 0, len-1);
}
