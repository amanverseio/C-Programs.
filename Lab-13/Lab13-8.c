#include <stdio.h>

int main()
{
    int a[200], b[200], c[400];
    int m1, m2, i, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &m1);

    printf("Enter first array elements:\n");
    for (i = 0; i < m1; i++)
    {
        scanf("%d", &a[i]);
        c[k++] = a[i];
    }

    printf("Enter size of second array: ");
    scanf("%d", &m2);

    printf("Enter second array elements:\n");
    for (i = 0; i < m2; i++)
    {
        scanf("%d", &b[i]);
        c[k++] = b[i];
    }

    printf("Merged array:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
