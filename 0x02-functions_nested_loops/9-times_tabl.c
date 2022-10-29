#include "main.h"

/*
* mult - print multiplication table
* @a: input as the first number
* @b: input as second number
* Return: nothing
*/
void times_table(void)
{
    int a, b;
    int z;

    
    for (a = 0; a < 10; a++)
    {
        for (b = 0; b < 19; b++)
        z = a*b;
        {
            printf("%d", z);
        }
        printf("\n");

    }
}

int main(void)
{
    times_table();
    return (0);
}
