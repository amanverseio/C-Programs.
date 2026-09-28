#include <stdio.h>

int main(void)
{
    int cp, sp;
    float p;

    printf("Enter Cost Price: ");
    scanf("%d", &cp);

    printf("Enter Selling Price: ");
    scanf("%d", &sp);

    if (sp > cp)
    {
        p = (sp - cp) * 100.0 / cp;
        printf("Profit Percentage = %.2f", p);
    }
    else if (cp > sp)
    {
        p = (cp - sp) * 100.0 / cp;
        printf("Loss Percentage = %.2f", p);
    }
    else
    {
        printf("No Profit No Loss");
    }

    return 0;
}
