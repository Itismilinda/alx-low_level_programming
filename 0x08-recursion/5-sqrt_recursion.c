#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
int find_sqrt(int n, int i)
{
    if (i * i == n)
    {
        return i;
    }
    else if (i * i > n)
    {
        return -1;
    }
    else
    {
        return find_sqrt(n, i + 1);
    }
}

int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return -1;
    }
    else if (n == 0)
    {
        return 0;
    }
    else
    {
        return find_sqrt(n, 1);
    }
}
