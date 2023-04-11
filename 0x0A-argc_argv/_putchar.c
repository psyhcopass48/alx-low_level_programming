#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c : character to print
 * return : 1 on success
 * on error , -1 is returned and errno is set appropriatly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
