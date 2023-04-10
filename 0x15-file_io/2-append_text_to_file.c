#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: On success returns 1,
 * if the filename is NULL -1.
 * if the file does not exist or user lacks permissions to write -1.
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
int y, bwn = 0;

if (filename == NULL)
return (-1);

y = open(filename, O_WRONLY | O_APPEND);
if (y == -1)
return (-1);

if (text_content != NULL)
{
while (text_content[bwn] != '\0')
bwn++;
}

if (bwn > 0)
{
if (write(y, text_content, bwn) != bwn)
{
close(y);
return (-1);
}
}

if (close(y) == -1)
return (-1);

return (1);
}
