#include "main.h"

/**
 * rev_string -  reverses a string
 * @s: the string to be modified
 * Return: void
 */

void rev_string(char *s)
{

int len = 0, index = 0;
char tem;

while (s[index++])
len++;

for (index = len - 1; index >= len / 2; index--)
{
tem = s[index];
s[index] = s[len - index - 1];
s[len - index - 1] = tem;
}

}
