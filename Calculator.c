
#include <stdio.h>
int main(void)
{
    int num1;
    int num2;
    char operator;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (operator == '+')[[]]
    {
        printf("The sum is %d\n", num1 + num2);
    }
    else if (operator == '-')
    {
        printf("The difference is %d\n", num1 - num2);
    }
    else if (operator == '*')
    {
        printf("The product is %d\n", num1 * num2);
    }
    else if (operator == '/')
    {
        if (num2 == 0)
        {
            printf("Error: division by zero\n");
        }
        else
        {
            printf("The quotient is %d\n", num1 / num2);
        }
    }
    else
    {
        printf("Invalid operator!!");
    }

    return (0);
}
