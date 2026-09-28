#include <stdio.h>
int main (){
    int a,b,c;
    printf("N1 : ");
    scanf("%d" , &a);
    printf("N2 : ");
    scanf("%d" , &b);
    printf("N3 : ");
    scanf("%d" , &c);

    if (a>b>c){
        printf("N1 is largest.\n");
    
    }
    else if (b>a>c){
        printf("N2 is largest.\n");
    } else
        printf("N3 is largest\n");
     return 0;
}