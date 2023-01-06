#include <stdio.h>

/**
 * Print the name of the program, followed by a newline
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", argv[0]);
	return (0);
}
