#include <stdio.h>
// #include <windows.h>

int main() {
    int a;
    printf("Enter number = ");
    scanf("%d" , &a);
    for (int i = 1; i <= a; i++) {
        printf("%d.\n", i);
        // Sleep(1000);
    }

    return 0;
}