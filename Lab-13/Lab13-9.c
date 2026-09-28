#include <stdio.h>

int main()
{
    int n, digit, i;
    int count[10] = {0};
    int maxCount = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    if (n == 0)
        count[0]++;

    while (n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (i = 0; i < 10; i++)
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            result = i;
        }
    }

    printf("Digit occurring most times = %d\n", result);
    return 0;
}