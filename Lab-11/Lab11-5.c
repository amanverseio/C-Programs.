
#include <stdio.h>

int main() {
    int a, b, max, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    for (lcm = max; ; lcm++) {
        if (lcm % a == 0 && lcm % b == 0) {
            break;
        }
    }

    printf("LCM = %d", lcm);

    return 0;
}
