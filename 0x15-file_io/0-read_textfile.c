#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and write to STDOUT.
 * @filename: Name of the text file to read.
 * @letters: Number of bytes to read from the file.
 *
 * Return: Number of letters it can read and print
 * 0 if function fails, filename is NULL
 * or if file can not be opened or read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *oscar;
ssize_t abc, d = 0, e = 0;

if (!filename)
return (0);

abc = open(filename, O_RDONLY);
if (abc == -1)
return (0);

oscar = malloc(sizeof(char) * letters);
if (!oscar)
{
close(abc);
return (0);
}

e = read(abc, oscar, letters);
if (e == -1)
{
free(oscar);
close(abc);
return (0);
}

d = write(STDOUT_FILENO, oscar, e);

free(oscar);
close(abc);

return (d);
}
