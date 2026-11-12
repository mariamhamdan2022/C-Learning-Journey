#include <stdio.h>

int main(void)
{
    int x = 6;
    int y = 9;

    if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("y is greater than x\n");
    }

    int a = 90;
    int b = 100;
    int z = a + b;

    if (z > 45)
    {
        printf("z is greater than 45\n");
    }
    else if (z < 45)
    {
        printf("z is less than 45\n");
    }
    else
    {
        printf("z is equal to 45\n");
    }

    return (0);
}