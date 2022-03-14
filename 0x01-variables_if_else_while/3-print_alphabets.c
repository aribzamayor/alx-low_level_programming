#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
char a = 'a';
char A = 'A';
int n = 0;
while (n < 52)
{
if (n < 26)
{
putchar (a);
a++;
}else
{
putchar (A);
A++;
}
n++;
}
putchar('\n');
return (0);
}
