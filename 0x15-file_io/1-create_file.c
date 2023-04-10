#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Pointer to name of file to create.
 * @text_content: Pointer to string to write to file.
 * Return: On success, function returns 1
 * return -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int abc, x, def = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[def])
def++;
}

abc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (abc == -1)
return (-1);

x = write(abc, text_content, def);
if (x == -1)
{
close(abc);
return (-1);
}

close(abc);
return (1);
}
