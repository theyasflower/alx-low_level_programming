#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
    int i;

    if (n > 0)
    {
        for (i = 0; i < n; i++)
        {
            _putchar('_');
        }
    }

    _putchar('\n');
}
