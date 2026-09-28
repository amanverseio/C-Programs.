
#include <stdio.h>

int main() {
    int num, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    for (; num > 0; num = num / 10) {
        digit = num % 10;
        sum = sum + digit * digit * digit;
    }

    if (sum == original)
        printf("%d is an Armstrong number.", original);
    else
        printf("%d is not an Armstrong number.", original);

    return 0;
}
