#include <stdlib.h>
#include <time.h>
/**
 * main - prints the phrase "Programming is like building a multilingual puzzle
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if(n < 0)
printf("%d is negative\n", n);
else if(n == 0)
printf("%d is zero\n", n);
return (0);
}
