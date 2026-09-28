#include <stdio.h>

int main(void)
{
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch (op)
    {
        case '+':
            printf("Answer = %d", a + b);
            break;

        case '-':
            printf("Answer = %d", a - b);
            break;

        case '*':
            printf("Answer = %d", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Answer = %d", a / b);
            else
                printf("Cannot divide by zero");
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}
