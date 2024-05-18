#include <stdio.h>

/**
 * main - this the function of task
 * Return: always 0
 */

int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
putchar (i);

for (i = 'A'; i <= 'Z'; i++)
putchar (i);
putchar ('\n');

return (0);
}
