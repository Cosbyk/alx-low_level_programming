#include <unistd.h>

/**
 * the _putchar.c
 */

int _putchar(char c)

{
  return write(STDOUT_FILENO, &C, 1);
}
