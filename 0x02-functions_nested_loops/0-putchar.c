#include "main.h"
/* Declaration of print_putchar function */
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
void print_putchar(void);
int main(void)
{
print_putchar();
return (0);
}
void print_putchar(void)
{
_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');
}
