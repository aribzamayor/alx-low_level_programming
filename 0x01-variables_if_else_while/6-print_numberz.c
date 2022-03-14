#include <stdio.h>
#include <stdlib.h>
/**
*main - prints the alphabet in lowercase, and then in uppercase,
*followed by a new line
*Return: Always 0 (Success)
*/
int main(void)
{
int n;
for(n = 48; n < 58; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
