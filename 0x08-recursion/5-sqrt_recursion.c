#include "main.h"

/**
 * power_operation - returns the natural square root of a number.
 * @n: input number.
 * @c: iterator.
 * Return: square root or -1.
 */

int _sqrt_recursion(int n)
{
if (n < 0)
{
return -1;
}
else if (n == 0 || n == 1)
{
return n;
}
else
{
int i;
for (i = 1; i * i <= n; i++)
{
if (i * i == n)
{
return i;
}
}
return -1;
}
}
