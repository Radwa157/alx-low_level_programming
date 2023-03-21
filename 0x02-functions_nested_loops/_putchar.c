#include <unistd.h>
#include "main.h"

/**
*_putchar - writes the character c to stdout
* @c: the character to print
*
*return:on success l.
*on error, -l is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(l, &c, l));
}
