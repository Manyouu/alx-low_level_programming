#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
    int r;

    r = labs(-1);
    printf("%d\n", r);
    r = labs(0);
    printf("%d\n", r);
    r = labs(1);
    printf("%d\n", r);
    r = labs(-98);
    printf("%d\n", r);
    return (0);
}
