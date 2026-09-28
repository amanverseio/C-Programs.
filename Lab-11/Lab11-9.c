
#include <stdio.h>

int main() {
    int n, first, last, digits = 1, temp, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Find the last digit
    last = n % 10;

    // Find the first digit and number of digits
    while (temp >= 10) {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = temp;

    // Remove first and last digits
    n = n % digits;
    n = n / 10;

    // Swap first and last digits
    result = last * digits + n * 10 + first;

    printf("Number after swapping = %d", result);

    return 0;
}
