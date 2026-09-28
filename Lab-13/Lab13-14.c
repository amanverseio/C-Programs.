#include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, second;
    int hasSecond = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("At least two elements are required.\n");
        return 0;
    }

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            second = largest;
            largest = a[i];
            hasSecond = 1;
        }
        else if (a[i] < largest && (!hasSecond || a[i] > second))
        {
            second = a[i];
            hasSecond = 1;
        }
    }

    printf("Largest = %d\n", largest);

    if (hasSecond)
        printf("Second Largest = %d\n", second);
    else
        printf("No distinct second-largest element\n");

    return 0;
}