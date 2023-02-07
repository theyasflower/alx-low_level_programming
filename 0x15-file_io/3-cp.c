#include "main.h"
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFSIZE 1024

void check97(int ac)
{
  if (ac != 3)
    {
      dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
      exit(97);
    }
}

void check98(int file_from, char *file)
{
  if (file_from == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
      exit(98);
    }
}

void check99(int file_to, char *file)
{
  if (file_to == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
      exit(99);
    }
}

void check100(int close_check)
{
  if (close_check == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_check);
      exit(100);
    }
}

int main(int ac, char **av)
{
  check97(ac);
  int file_from = open(av[1], O_RDONLY);
  check98(file_from, av[1]);
  int file_to = open(av[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
  check99(file_to, av[2]);
  char buf[BUFSIZE];
  ssize_t read_check, write_check;
  while ((read_check = read(file_from, buf, BUFSIZE)) > 0)
    {
      write_check = write(file_to, buf, read_check);
      check99(write_check, av[2]);
    }
  check98(read_check, av[1]);
  int close_check = close(file_from);
  check100(close_check);
  close_check = close(file_to);
  check100(close_check);
  return (0);
}
