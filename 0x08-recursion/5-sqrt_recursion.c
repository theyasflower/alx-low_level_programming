#include "main.h"

/**
 * power_operation - returns the natural square root of a number.
 * @n: input number.
 * @c: iterator.
 * Return: square root or -1.
 */

int _sqrt_recursion(int n, int i)
{
if (n < 0)
{
return -1;
}
else if (n == 0 || n == 1)
{
return n;
}
else if (i * i == n)
{
return i;
}
else if (i * i > n)
{
return -1;
}
else
{
return _sqrt_recursion(n, i + 1);
}
}

int _sqrt_recursion(int n)
{
return _sqrt_recursion(n, 1);
}
