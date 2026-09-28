// Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int n, fact, i;

    printf("Enter number = ");
    scanf("%d", &n);

    fact = 1;

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);

    return 0;
}
