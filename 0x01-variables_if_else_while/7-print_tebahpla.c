#include <stdio.h>

/**
 * main - this is main function
 * Return: always 0
 */

int main(void)

{

char low;

for (low = 'z'; low >= 'a'; low--)
putchar(low);
putchar('\n');

return (0);
}
