#include <stdio.h>

/**
 * main - prints a[2] = 98
 *
 * Return: always 0
 */
int main(void)
{
    int a[5] = {0, 1, 98, 3, 4};
    int *p;

    p = &a[0];
    printf("a[2] = %d\n", *(p + 2));  // Add this line to print a[2] = 98 followed by a new line
    return (0);
}
