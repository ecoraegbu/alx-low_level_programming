#include "main.h"
#include <stdio.h>

/**
 * print diagonal
 */

void print_diagonal(int n)
{

int i;
int b;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (b = 0; b < i; b++)
{
_putchar (' ');
}
_putchar (92);
_putchar ('\n');

}

}


else
{
_putchar ('\n');
}

}
