#include <stdio.h>
int main(){
    int a , b , c;
    printf("N1 = ");
    scanf("%d" , &a);

    printf("N2 = ");
    scanf("%d" , &b);

    c=a;
    a=b;
    b=c;
    printf("After swapping value: a=%d , b=%d\n" , a  , b);
    return 0;

}