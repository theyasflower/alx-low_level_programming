#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFSIZE 1024

void check97(int argc)
{
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }
}

void check98(char *file)
{
    int fd;

    fd = open(file, O_RDONLY);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
        exit(98);
    }
}

void check99(char *file, int fd_to)
{
    int written;

    written = write(fd_to, "", 1);
    if (written == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
        exit(99);
    }
}

void check100(int fd, char *file)
{
    int closed;

    closed = close(fd);
    if (closed == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(100);
    }
}

int main(int argc, char *argv[])
{
    int fd_from, fd_to, read_status, written;
    char buf[BUFSIZE];

    check97(argc);
    check98(argv[1]);

    fd_from = open(argv[1], O_RDONLY);
    fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
    check99(argv[2], fd_to);

    do {
        read_status = read(fd_from, buf, BUFSIZE);
}
